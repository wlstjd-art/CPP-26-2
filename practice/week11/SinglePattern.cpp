#include <iostream>
using namespace std;

class Singleton {
private:
    Singleton() {}
    static Singleton* instance;
public:
    static Singleton* getInstance() {
        if (!instance) instance = new Singleton();
        return instance;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s = Singleton::getInstance();
    (void)s;
    return 0;
}
