#include <iostream>
using namespace std;

class Pizza
{
public:
 int size;
 Pizza(int s) : size(s) {}
};

void MakeDouble(Pizza& p)
{
 p.size *= 2;
}

int main()
{
 Pizza p(10);
 MakeDouble(p);
 cout << p.size << "인치 피자" << endl;
 return 0;
}
