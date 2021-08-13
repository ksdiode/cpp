#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  int x = 100;
  int y = 200;

  cout << "x / y : " << x/y << endl;  // 정수에 대한 나누기는 결과도 정수가 됨(버림 처리)
  cout << "x / (double)y : " << x/(double)y << endl;  // (타입) : 캐스팅 연산자() - 지정한 타입으로 형변환
  cout << "x % 3 : " << x % 3 << endl;
  return 0;
}
