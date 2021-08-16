#include <iostream>

using namespace std;


// cpp 지역변수:  { } 블럭안에 선언된 변수, 
// 자신이 속한 { } 블럭 안에서만 사용가능

int main() {
  int sum = 0;  // main 함수의 지역변수 
//   int i;
  for(int i=0; i<=10; i++) { // i: for문 블럭에 선언된 지역변수
    sum += i;
  }

  cout << "1부터 10까지 정수의 합 = " << sum << endl;
  // cout << i << endl;
  return 0;
}
