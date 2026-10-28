/*==========================================================
 [배울 점] sort + 사용자 정의 비교함수 — 정렬 기준을 내가 만든다
 --------------------------------------------------------
  - Compare(p,q)는 'p가 q보다 먼저 와야 하나?'의 bool 답. > 이면 내림차순, < 이면 오름차순
  - sort(begin,end,Compare) 세 번째 인수로 비교 함수를 꽂는 '전략' 설계 — C의 qsort보다 깔끔
  - private 데이터와 getter를 활용하는 비교/정렬 — 데이터 보호와 동작 재사용의 조화
==========================================================*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class person{
private:    
    string name;
    int age;

public:
    person(string n, int a){
        name = n;
        age = a;
    }
    string getname(){
        return name;
    }
    int getage(){return age;}
    void Print(){
        cout << name << "  "<< age << endl;

    }


};

// 학습: 비교함수는 '순서 결정 규칙'일 뿐 — 반환식이 곧 정렬 기준
bool Compare(person &p, person&q){
    return p.getage() > q.getage();
}
int main(){

    vector<person>list;
    // 학습: 임시 객체를 만들어 바로 vector에 보관하는 흔한 관용구
    list.push_back(person("kim",30));
    list.push_back(person("park",22));
    list.push_back(person("lee",26));

    // 학습: 알고리즘(sort)과 정책(Compare)의 분리 — C++ 표준 라이브러리의 철학
    sort(list.begin(),list.end(),Compare);

    for(auto &e : list){

        e.Print();
    }

    return 0;
}