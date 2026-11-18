#include "user.h"

// ===== User 기본 클래스 구현 =====

// 생성자: User 객체가 만들어지자마자 hp = 20, itemCnt = 0으로 초기화한다
User::User() {
	hp = 20;
	itemCnt = 0;
}

// 가상 소멸자
User::~User() {}

// hp를 전달받은 값만큼 감소시킨다
void User::DecreaseHP(int dec_hp) {
	hp -= dec_hp;
}

// hp에 전달받은 값만큼 증가한다
void User::IncreaseHP(int inc_hp) {
	hp += inc_hp;
}

// hp를 반환한다
int User::GetHP() const {
	return hp;
}

// hp가 0보다 크면 true, 0이면 false
bool User::CheckUser() {
	return hp > 0;
}

// 아이템 획득 횟수 1 증가
void User::IncreaseItemCnt() {
	itemCnt++;
}

// 아이템 획득 횟수 반환
int User::GetItemCnt() const {
	return itemCnt;
}

// 공격합니다 (User 본연의 공격)
void User::doAttack() {
	std::cout << "공격합니다" << std::endl;
}

// 출력 (<<) 연산자 중복 정의
std::ostream& operator<<(std::ostream& os, const User& user) {
	os << "현재 HP는 " << user.GetHP() << " 이고, 먹은 아이템은 총 " << user.itemCnt << "개 입니다";
	return os;
}

// ===== Magician 자식 클래스 구현 =====

// doAttack 재정의: "마법 사용" 출력
void Magician::doAttack() {
	std::cout << "마법 사용" << std::endl;
}

// ===== Warrior 자식 클래스 구현 =====

// doAttack 재정의: "베기 사용" 출력
void Warrior::doAttack() {
	std::cout << "베기 사용" << std::endl;
}
