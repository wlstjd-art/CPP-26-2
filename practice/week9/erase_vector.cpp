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

    auto it = v.begin() + 5;     //it 의 타입은 vector <int>::iterator    이터레이터는 벡터안의 원소를 가리키는 위치표시자,
    v.insert(it, 100);

    cout << "5번 인덱스에 값을 추가한후 v : ";
    for(auto a : v){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}