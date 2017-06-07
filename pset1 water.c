#include <stdio.h>
#include <cs50.h>

int main(void)
{
     
 int minutes;
     do {
     printf("minutes: \n");
     minutes = GetInt();
     } while (minutes < 0);
     
     int bottles = 12 * minutes;
     
     
    if (minutes > 0)
     {         
      
      printf("bottles: %i\n", bottles);
     
      
     }
    
     
}
