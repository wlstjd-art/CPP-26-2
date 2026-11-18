#pragma once
#include <iostream>

// ========== User 기본(부모) 클래스 ==========
// 상태: hp, itemCnt (private) / 동작: 아래 멤버함수들
class User {
	int hp;
	int itemCnt;

public:
	// 생성자: hp를 20, itemCnt를 0으로 초기화한 User 객체를 만든다
	User();

	// 가상 소멸자: 부모 포인터로 자식 객체를 삭제해도 자식 소멸자까지 호출된다
	virtual ~User();

	// hp를 전달받은 값만큼 감소시킨다
	void DecreaseHP(int dec_hp);

	// hp에 전달받은 값만큼 증가한다
	void IncreaseHP(int inc_hp);

	// hp를 반환한다 (hp가 private이라 밖에서 읽는 유일한 방법)
	int GetHP() const;

	// hp가 0보다 크면 true, 아니면 false를 반환한다
	bool CheckUser();

	// 아이템 먹은 횟수를 1 증가시킨다
	void IncreaseItemCnt();

	// 아이템 먹은 횟수를 반환한다
	int GetItemCnt() const;

	// 공격 동작. 자식 클래스에서 재정의한다.
	// virtual이라, User 참조로 호출해도 "실제 객체"의 함수가 실행된다 (다중성)
	virtual void doAttack();

	// 출력 (<<) 연산자 중복 정의
	friend std::ostream& operator<<(std::ostream& os, const User& user);
};

// ========== Magician 클래스: User를 상속 (Magician is a User) ==========
class Magician : public User {
public:
	// doAttack 재정의: "마법 사용"을 출력한다
	void doAttack() override;
};

// ========== Warrior 클래스: User를 상속 (Warrior is a User) ==========
class Warrior : public User {
public:
	// doAttack 재정의: "베기 사용"을 출력한다
	void doAttack() override;
};
