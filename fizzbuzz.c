#include <stdio.h>

void main(void)
{
    for (int i = 0; i < 100; i ++) {
      if (i % 15 == 0) {
        printf("Fizz Buzz\n");
      } else if (i % 5 == 0) {
        printf("Buzz\n");
      } else if (i % 3 == 0) {
        printf("Fizz\n");
      }
    }
}
