#include <iostream>
#include <memory>
using namespace std;
int main()
{          //면 4바이트만탐색해 그래서 int[]로
unique_ptr<int[]> buf(new int[10]);
for (int i = 0; i<10; i++) {
buf[i] = i;
}
for (int i = 0; i<10; i++) {
cout << buf[i] << " ";
}
cout << endl;
return 0;
}