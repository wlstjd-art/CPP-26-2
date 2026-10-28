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

bool Compare(person &p, person&q){
    return p.getage() > q.getage();
}
int main(){

    vector<person>list;
    list.push_back(person("kim",30));
    list.push_back(person("park",22));
    list.push_back(person("lee",26));

    sort(list.begin(),list.end(),Compare);

    for(auto &e : list){

        e.Print();
    }

    return 0;
}