#include <iostream>
using namespace std;

void test(int x[]){
  x[0] = 100;
}

int main(int argc, char const *argv[]) {
  int arr[3] = {1, 2, 3};
  cout << arr[0] << endl;

  test(arr);

  cout << arr[0] << endl;
  return 0;
}
