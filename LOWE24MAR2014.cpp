#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int multiply(int y, int x) {
  int z;
  z = x * y;
  return z;
}

int main() {
  for (int i = 0; i <= 4; i++) {
    int y, x,p;
    cout <<"What is x and p?\n";
    cin >>x >>p;
    y = multiply(x, p);
    cout <<"the value of y " <<y <<"\n";
  }

  return 0;
}
