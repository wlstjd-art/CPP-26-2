/*==========================================================
 [배울 점] iterator = vector 안의 위치 표시자
 --------------------------------------------------------
  - auto it = v.begin() + 5 — begin()은 첫 원소 위치, +5해서 5번째 인덱스로 이동
  - v.insert(it, 100) 가리킨 자리에 삽입, 뒤 원소들은 자동 밀려남
  - ⚠ 파일명은 erase인데 내용은 insert다. 같은 코드가 insert_vector.cpp에 또 있다 — 이름과 내용 점검은 좋은 습관
==========================================================*/
#include <vector>
#include <iostream>
using namespace std;

int main(void){

    vector <int> v;
    for(int i=0; i< 10; i++){
        v.push_back(i);
    }

    cout << "현재의 v : " ;
    for(auto & a : v){
        cout << a << " ";
    }
    cout << endl;

    // 학습: iterator 타입은 auto로 — vector<int>::iterator를 직접 안 적어도 된다
    auto it = v.begin() + 5;     //it 의 타입은 vector <int>::iterator    이터레이터는 벡터안의 원소를 가리키는 위치표시자,
    // 학습: 위치는 'iterator'로 지정하고 값은 뒤에서 — 이런 API 설계를 배운다
    v.insert(it, 100);

    cout << "5번 인덱스에 값을 추가한후 v : ";
    for(auto a : v){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}