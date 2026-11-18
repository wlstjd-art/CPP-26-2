#include <iostream>
using namespace std;

int main() {
 int stackNum = 100; // Stack: 자동 소멸
 int *p = new int; // Heap: int 4바이트 확보, 주소가 p에
 *p = 42; // *p로 값 넣기 (역참조)

 cout << "--- new int 체험 ---" << endl;
 cout << "*p = " << *p << " (new로 Heap에 만든 정수)" << endl;
 cout << "stackNum 주소 = " << &stackNum << " <- Stack" << endl;
 cout << "p 주소 = " << p << " <- Heap (new가 돌려준 주소)" << endl;

 delete p; // Heap 반환. 이후 *p는 쓰면 안 됨(dangling)
 cout << "\ndelete 후: p는 여전히 " << p << " but 가리키는 곳은 이미 남의 땅" << endl;

 // 배열 new: 런타임에 크기 정할 수 있음
 int n;
 cout << "\n몇 개의 int를 만들까요? ";
 cin >> n;
 int *arr = new int[n];
 for (int i = 0; i < n; i++) arr[i] = i * i;
 cout << "arr[0..]: ";
 for (int i = 0; i < n; i++) cout << arr[i] << " ";
 cout << endl;
 delete[] arr; // 배열은 delete[] (!)

 return 0;
}
