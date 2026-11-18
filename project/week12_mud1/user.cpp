#include "user.h"

// 생성자: User 객체가 만들어지자마자 hp = 20으로 초기화한다
User::User() {
	hp = 20;
}

// hp를 전달받은 값만큼 감소시킨다
void User::DecreaseHP(int dec_hp) {
	hp -= dec_hp;
}

// hp에 전달받은 값만큼 증가한다
void User::IncreaseHP(int inc_hp) {
	hp += inc_hp;
}

// hp를 반환한다
int User::GetHP() {
	return hp;
}

// hp가 0이 아니면 true, 0이면 false
bool User::CheckUser() {
	return hp != 0;
}
