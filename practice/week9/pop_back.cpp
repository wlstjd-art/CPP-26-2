#include <vector>
#include <iostream>
using namespace std;

int main(void){

    vector <int> v(10);     
    for(int i = 0; i < 10; i++){
        v.push_back(i);     //숫자 집어넣어줌. 
    }
    cout << "현재의 v = " ;
    for(auto& a : v)
        cout << a << " ";
    cout << endl;
    
    cout << "삭제요소: ";
    
    while(!v.empty()){
        cout << v.back() << " ";    //v.back(): 벡터의 젤 마지막값가져옴!
        v.pop_back();
    }
    cout << endl;

    return 0;

/*      현재의 v = 0 0 0 0 0 0 0 0 0 0 0 1 2 3 4 5 6 7 8 9 
        삭제요소: 9 8 7 6 5 4 3 2 1 0 0 0 0 0 0 0 0 0 0 0 
 */
}