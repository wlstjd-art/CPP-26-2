#include <iostream>
#include <time.h>    //time
#include <cstdlib>   //rand()들어잇어 난수
using namespace std;
int main()
{
int *ptr;
//srand(1); //41 18467 6334 26500 19169 15724 11478 29358 26962 24464 
//srand(2); //45 29216 24198 17795 29484 19650 14590 26431 10705 18316
srand(time(NULL));        //time(0) 이랑동일

ptr = new int[10]; // ① 동적 메모리 할당
for (int i = 0; i<10; i++)
ptr[i] = rand(); // ② 동적 메모리 사용
for (int i = 0; i<10; i++)
cout << ptr[i] << " ";
delete[] ptr; // ③ 동적 메모리 반납 배열지울때
cout << endl;
return 0;
}
