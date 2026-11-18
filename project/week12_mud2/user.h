#pragma once
#include <iostream>

// User 클래스 선언부
// 상태: hp, itemCnt (private) / 동작: 아래 멤버함수들
class User {
	int hp;
	int itemCnt;

public:
	// 생성자: hp를 20, itemCnt를 0으로 초기화한 User 객체를 만든다
	User();

	// hp를 전달받은 값만큼 감소시킨다
	void DecreaseHP(int dec_hp);

	// hp에 전달받은 값만큼 증가한다
	void IncreaseHP(int inc_hp);

	// hp를 반환한다 (hp가 private이라 밖에서 읽는 유일한 방법)
	int GetHP() const;

	// hp가 0이 아니면 true, 0이면 false를 반환한다
	bool CheckUser();

	// 아이템 먹은 횟수를 1 증가시킨다
	void IncreaseItemCnt();

	// 아이템 먹은 횟수를 반환한다
	int GetItemCnt() const;

	// 출력 (<<) 연산자 중복 정의
	friend std::ostream& operator<<(std::ostream& os, const User& user);
};
