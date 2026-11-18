#include <iostream>
using namespace std;

class PassangerCar{
    public:
        int seats;
        void SetSeats(int n){
            this->seats = n;
        }
};

class Truck{
    public:
        int payload; // 적재하중
        void SetPayload(int load){
            this->payload = load;
        }
};

class Pickup : public PassangerCar, public Truck{
    public:
        int tow_capability;
        void SetTow(int capa){
            this->tow_capability = capa;
        }
        void Print(){
            cout << "seats: " << seats << " payload: " 
                << payload << "tow: " << tow_capability << endl;
        }
};

int main(){
    Pickup my_car;
    my_car.SetSeats(4);
    my_car.SetPayload(100000);
    my_car.SetPayload(300000);

    return 0;
}