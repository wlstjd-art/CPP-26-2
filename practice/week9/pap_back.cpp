#include <vector>
#include <iostream>
using namespace std;

int main(){

    vector <int> v;
    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }

    cout << "현재의 v : ";
    for(auto& e : v){
        cout << e << " ";
        
    }
    cout << endl;


    v.erase(v.end()+1);
    
    cout << "현재의 v : ";
    for(auto& e : v){
        cout << e << " ";
        
    }
    cout << endl;    

    auto it = v.begin() + 3;
    v.insert(it,100);

    return 0;
}