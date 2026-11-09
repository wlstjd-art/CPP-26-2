#include <iostream>
using namespace std;


class camera{

    private:
        camera(){}
        static camera *instance;
    public:
        int photos = 0;
        static camera *GetInstance();
        void capture(){
            cout << "사진 촬영이 수행되었음!" <<endl;
            photos += 1;
        }



};      
camera* camera::instance = nullptr;

camera* camera::GetInstance(){
    if(!instance){
        instance = new camera();
        cout << "첫번쨰 객체 생성됨" <<endl;
        return instance;
    }
    else {
        cout << "이전 객체를 반환함" <<endl;
        return instance;
    }
} 
int main(){
    camera* c1 = camera::GetInstance();
    camera* c2 = camera::GetInstance();
    camera* c3 = camera::GetInstance();
    c1->capture();
    c2->capture();
    cout << c1->photos;
    return 0;
}