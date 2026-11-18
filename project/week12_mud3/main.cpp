#include <iostream>
#include <string>
#include <vector>
#include "user.h"
using namespace std;

const int mapX = 5;
const int mapY = 5;

// 사용자 정의 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY);
void displayMap(const vector<vector<int>>& map, int user_x, int user_y, const string& mark);
bool checkGoal(const vector<vector<int>>& map, int user_x, int user_y);
void checkstate(const vector<vector<int>>& map, int user_x, int user_y, User& user);

// 한 명의 유저 차례를 진행하는 함수 (마법사/전사 공유 - DRY)
// user: 이번 차례 유저 (User 참조로 받아도 virtual doAttack은 실제 객체의 함수를 부른다)
// name: 화면에 표시할 이름 / mark: 지도에 표시할 표시
// user_x, user_y: 그 유저의 위치 (참조로 받아서 이동 후에도 유지)
// 반환값: 0=게임 계속, 1=목적지 도착, -1=그 유저 사망, -2=종료 명령
int playTurn(User& user, const string& name, const string& mark,
	const vector<vector<int>>& map, int& user_x, int& user_y);

// 메인  함수
int main() {

	// Magician과 Warrior 두 명의 유저 (생성자가 hp = 20, itemCnt = 0으로 초기화)
	Magician magician;
	Warrior warrior;

	// 0은 빈 공간, 1은 아이템, 2는 적, 3은 포션, 4는 목적지
	vector<vector<int>> map = {
		{0, 1, 2, 0, 4},
		{1, 0, 0, 2, 0},
		{0, 0, 0, 0, 0},
		{0, 2, 3, 0, 0},
		{3, 0, 0, 0, 2}
	};

	// 각 유저의 시작 위치
	int mag_x = 0, mag_y = 0; // 마법사 시작
	int war_x = 4, war_y = 4; // 전사 시작

	// 각 유저의 생존 여부 (사망하면 그 유저는 차례를 쉬고, 둘 다 사망하면 실패)
	bool mag_alive = true;
	bool war_alive = true;

	int turn = 0; // 짝수 차례: 마법사, 홀수 차례: 전사 (번갈아가며 진행)

	// 두 유저가 번갈아가며 게임 진행
	while (true) {

		// 두 유저 모두 사망하면 게임 실패
		if (!mag_alive && !war_alive) {
			cout << "두 유저 모두 사망했습니다. 실패했습니다." << endl;
			cout << "게임을 종료합니다." << endl;
			break;
		}

		int result = 0;

		if (turn % 2 == 0) { // 마법사 차례
			if (mag_alive) {
				result = playTurn(magician, "마법사", "MAGE", map, mag_x, mag_y);
				if (result == 1) { // 마법사 목적지 도착
					cout << "마법사가 목적지에 도착했습니다! 축하합니다!" << endl;
					cout << "게임을 종료합니다." << endl;
					break;
				}
				else if (result == -1) { // 마법사 사망
					mag_alive = false;
				}
				else if (result == -2) { // 종료 명령
					break;
				}
			}
		}
		else { // 전사 차례
			if (war_alive) {
				result = playTurn(warrior, "전사", "WARR", map, war_x, war_y);
				if (result == 1) { // 전사 목적지 도착
					cout << "전사가 목적지에 도착했습니다! 축하합니다!" << endl;
					cout << "게임을 종료합니다." << endl;
					break;
				}
				else if (result == -1) { // 전사 사망
					war_alive = false;
				}
				else if (result == -2) { // 종료 명령
					break;
				}
			}
		}

		turn++;
	}
	return 0;
}

// 한 명의 유저 차례를 진행하는 함수 (반환값: 0=계속, 1=목적지, -1=사망, -2=종료)
int playTurn(User& user, const string& name, const string& mark,
	const vector<vector<int>>& map, int& user_x, int& user_y) {

	string user_input = "";
	cout << "[" << name << "] 현재 HP: " << user.GetHP() << "   ";
	cout << "명령어를 입력하세요 (상,하,좌,우,지도,정보,종료): ";
	cin >> user_input;

	if (user_input == "상") {
		// 위로 한 칸 올라가기
		user_y -= 1;
		if (checkXY(user_x, mapX, user_y, mapY) == false) {
			cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
			user_y += 1;
		}
		else {
			cout << "한 칸 올라갑니다." << endl;
			displayMap(map, user_x, user_y, mark);
			checkstate(map, user_x, user_y, user);
			user.DecreaseHP(1); // 한 칸 이동할 때마다 HP 1 감소
		}
	}
	else if (user_input == "하") {
		// 아래로 한 칸 내려가기
		user_y += 1;
		if (checkXY(user_x, mapX, user_y, mapY) == false) {
			cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
			user_y -= 1;
		}
		else {
			cout << "한 칸 내려갑니다." << endl;
			displayMap(map, user_x, user_y, mark);
			checkstate(map, user_x, user_y, user);
			user.DecreaseHP(1);
		}
	}
	else if (user_input == "좌") {
		// 왼쪽으로 이동하기
		user_x -= 1;
		if (checkXY(user_x, mapX, user_y, mapY) == false) {
			cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
			user_x += 1;
		}
		else {
			cout << "왼쪽으로 이동합니다." << endl;
			displayMap(map, user_x, user_y, mark);
			checkstate(map, user_x, user_y, user);
			user.DecreaseHP(1);
		}
	}
	else if (user_input == "우") {
		// 오른쪽으로 이동하기
		user_x += 1;
		if (checkXY(user_x, mapX, user_y, mapY) == false) {
			cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
			user_x -= 1;
		}
		else {
			cout << "오른쪽으로 이동합니다." << endl;
			displayMap(map, user_x, user_y, mark);
			checkstate(map, user_x, user_y, user);
			user.DecreaseHP(1);
		}
	}
	else if (user_input == "지도") {
		// 지도 보여주기
		displayMap(map, user_x, user_y, mark);
	}
	else if (user_input == "정보") {
		// 현재 유저 정보 보여주기
		cout << user << endl;
	}
	else if (user_input == "종료") {
		cout << "종료합니다.";
		return -2;
	}
	else {
		cout << "잘못된 입력입니다. 차례를 넘깁니다." << endl;
		return 0;
	}

	// 목적지에 도달했는지 / 사망했는지 체크
	if (checkGoal(map, user_x, user_y) == true) {
		return 1;
	}
	if (user.CheckUser() == false) {
		cout << name << "의 HP가 0 이하가 되었습니다. 사망했습니다!" << endl;
		return -1;
	}
	return 0;
}

// 지도와 사용자 위치 출력하는 함수 (mark: 이번 차례 유저의 표시 - MAGE/WARR)
void displayMap(const vector<vector<int>>& map, int user_x, int user_y, const string& mark) {
	for (int i = 0; i < mapY; i++) {
		for (int j = 0; j < mapX; j++) {
			if (i == user_y && j == user_x) {
				cout << " " << mark << " |";
			}
			else {
				int posState = map[i][j];
				switch (posState) {
				case 0:
					cout << "      |"; // 6칸 공백
					break;
				case 1:
					cout << "아이템|";
					break;
				case 2:
					cout << "  적  |"; // 양 옆 2칸 공백
					break;
				case 3:
					cout << " 포션 |"; // 양 옆 1칸 공백
					break;
				case 4:
					cout << "목적지|";
					break;
				}
			}
		}
		cout << endl;
		cout << " -------------------------------- " << endl;
	}
}

// 이동하려는 곳이 유효한 좌표인지 체크하는 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY) {
	bool checkFlag = false;
	if (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY) {
		checkFlag = true;
	}
	return checkFlag;
}

// 유저의 위치가 목적지인지 체크하는 함수
bool checkGoal(const vector<vector<int>>& map, int user_x, int user_y) {
	// 목적지 도착하면
	if (map[user_y][user_x] == 4) {
		return true;
	}
	return false;
}

// 뭔갈 만나나?
void checkstate(const vector<vector<int>>& map, int user_x, int user_y, User& user) {
	// 0은 빈 공간, 1은 아이템, 2는 적, 3은 포션, 4는 목적지

	if (map[user_y][user_x] == 1) {
		cout << "아이템이 있습니다. hp가 1증가합니다!" << endl;
		user.IncreaseHP(1);
		user.IncreaseItemCnt(); // 아이템 횟수 증가
	}
	else if (map[user_y][user_x] == 2) {
		user.doAttack(); // 적을 만나면 공격! (virtual이라 마법사는 "마법 사용", 전사는 "베기 사용"이 출력됨)
		cout << "적을 공격했습니다. 체력이 2가 줄어듭니다!!" << endl;
		user.DecreaseHP(2);
	}
	else if (map[user_y][user_x] == 3) {
		cout << "포션이 있습니다!!!! HP가 2가 증가됩니다!" << endl;
		user.IncreaseHP(2);
	}
	else if (map[user_y][user_x] == 4) {
		// 목적지는 이벤트 없음
	}
	else if (map[user_y][user_x] == 0) {
		cout << "빈칸입니다~~ 빈칸은 늘 HP가 1감소합니다!" << endl;
		user.DecreaseHP(1);
	}
}
