#include <iostream>
#include <string>
#include <vector>
#include "user.h"
using namespace std;

const int mapX = 5;
const int mapY = 5;

// 사용자 정의 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY);
void displayMap(const vector<vector<int>>& map, int user_x, int user_y);
bool checkGoal(const vector<vector<int>>& map, int user_x, int user_y);
void checkstate(const vector<vector<int>>& map, int user_x, int user_y, User& user);

// 메인  함수
int main() {

	// hp = 20, itemCnt = 0으로 시작하는 User 객체
	User user;

	// 0은 빈 공간, 1은 아이템, 2는 적, 3은 포션, 4는 목적지
	vector<vector<int>> map = {
		{0, 1, 2, 0, 4},
		{1, 0, 0, 2, 0},
		{0, 0, 0, 0, 0},
		{0, 2, 3, 0, 0},
		{3, 0, 0, 0, 2}
	};

	// 유저의 위치를 저장할 변수
	int user_x = 0; // 가로 번호
	int user_y = 0; // 세로 번호

	// 게임 시작: user의 CheckUser가 true인 동안 계속 (hp가 0보다 크면 true)
	while (user.CheckUser()) { // 사용자에게 계속 입력받기 위해

		// 사용자의 입력을 저장할 변수
		string user_input = "";
		cout << "현재 HP: " << user.GetHP() << "   ";
		cout << "명령어를 입력하세요 (상,하,좌,우,지도,정보,종료): ";
		cin >> user_input;

		if (user_input == "상") {
			// 위로 한 칸 올라가기
			user_y -= 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_y += 1;
			}
			else {
				cout << "한 칸 올라갑니다." << endl;
				displayMap(map, user_x, user_y);
				checkstate(map, user_x, user_y, user);
				user.DecreaseHP(1); // 한 칸 이동할 때마다 HP 1 감소
			}
		}
		else if (user_input == "하") {
			// 아래로 한 칸 내려가기
			user_y += 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_y -= 1;
			}
			else {
				cout << "한 칸 내려갑니다." << endl;
				displayMap(map, user_x, user_y);
				checkstate(map, user_x, user_y, user);
				user.DecreaseHP(1); // 한 칸 이동할 때마다 HP 1 감소
			}
		}
		else if (user_input == "좌") {
			// 왼쪽으로 이동하기
			user_x -= 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);

			if (inMap == false) {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_x += 1;
			}
			else {
				cout << "왼쪽으로 이동합니다." << endl;
				displayMap(map, user_x, user_y);
				checkstate(map, user_x, user_y, user);
				user.DecreaseHP(1); // 한 칸 이동할 때마다 HP 1 감소
			}
		}
		else if (user_input == "우") {
			// 오른쪽으로 이동하기
			user_x += 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_x -= 1;
			}
			else {
				cout << "오른쪽으로 이동합니다." << endl;
				displayMap(map, user_x, user_y);
				checkstate(map, user_x, user_y, user);
				user.DecreaseHP(1); // 한 칸 이동할 때마다 HP 1 감소
			}
		}
		else if (user_input == "지도") {
			// 지도 보여주기
			displayMap(map, user_x, user_y);
		}
		else if (user_input == "정보") {
			// 현재 사용자 정보 보여주기
			cout << user << endl;
		}
		else if (user_input == "종료") {
			cout << "종료합니다.";
			break;
		}
		else {
			cout << "잘못된 입력입니다." << endl;
			continue;
		}

		// 목적지에 도달했는지 체크
		bool die = user.GetHP() <= 0;
		bool finish = checkGoal(map, user_x, user_y);
		if (finish == true) {
			cout << "목적지에 도착했습니다! 축하합니다!" << endl;
			cout << "게임을 종료합니다." << endl;
			break;
		}
		else if (die == true) {
			cout << "HP가 0 이하가 되었습니다. 실패했습니다." << endl;
			cout << "게임을 종료합니다." << endl;
			break;
		}

	}
	return 0;
}

// 지도와 사용자 위치 출력하는 함수
void displayMap(const vector<vector<int>>& map, int user_x, int user_y) {
	for (int i = 0; i < mapY; i++) {
		for (int j = 0; j < mapX; j++) {
			if (i == user_y && j == user_x) {
				cout << " USER |"; // 양 옆 1칸 공백
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
		cout << "적이 있습니다. 체력이 2가 줄어듭니다!!" << endl;
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
