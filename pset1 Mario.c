#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	
	int height;
	
	
	do {
		printf("Enter Desired Pyramid Height:");
		height = GetInt();
        
         if (height == 0)
        {
            return 0;
        }
        
	} while (height < 1 || height > 23);

	
	for(int i = 0; i < height; i++) 
	{
		
        for(int space = 0; space < height-i-1; space++)
        {
            printf(" ");
        }
        
		        for(int hash = 0; hash < i+2; hash++)
		         {
		            	printf("#");
		          }
		printf("\n");
	}	


	return false;
}
