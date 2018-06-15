#include <stdio.h>


int collatz(int n) {
  printf("%i\n", n);
  if (n == 1) {
    return n;
  } else if (n % 2 == 0) {
    return collatz(n /2);
  } else if (n % 2 != 0) {
    return collatz((n * 3) + 1);
  }
}

int main(void) {

  collatz(5);
}
