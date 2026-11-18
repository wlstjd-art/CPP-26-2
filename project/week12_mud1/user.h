#pragma once

// User 클래스 선언부
// 상태: hp (private) / 동작: 아래 멤버함수들
class User {
	int hp;

public:
	// 생성자: hp를 20으로 초기화한 User 객체를 만든다
	User();

	// hp를 전달받은 값만큼 감소시킨다
	void DecreaseHP(int dec_hp);

	// hp에 전달받은 값만큼 증가한다
	void IncreaseHP(int inc_hp);

	// hp를 반환한다 (hp가 private이라 밖에서 읽는 유일한 방법)
	int GetHP();

	// hp가 0이 아니면 true, 0이면 false를 반환한다
	bool CheckUser();
};
