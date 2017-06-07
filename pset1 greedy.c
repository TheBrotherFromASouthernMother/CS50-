#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void) {
    
     float changeDue;
     int CustomerOwed;
     int CoinCount = 0;
    
    do {
    printf("How much change do we owe you?:\n");
     changeDue = GetFloat(); 
     } while (changeDue < 0);
    
    
    CustomerOwed = round(changeDue * 100);
    
    
    
    while (CustomerOwed >= 25) {
        CustomerOwed -= 25;
        CoinCount ++;
          
        }
        
   while (CustomerOwed >= 10) {
        CustomerOwed -= 10;
        CoinCount ++;
        }
    
    while (CustomerOwed >= 5) {
        CustomerOwed -= 5;
        CoinCount ++;
        }

    while (CustomerOwed >= 1) {
        CustomerOwed -= 1;
        CoinCount ++;
        }

        
        
        printf("%i\n", CoinCount);



}
