#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h> 
#include <stdlib.h>


int main (int argc, string argv[]) {
     
    
    if (argc != 2) {
        printf("error \n");
        return 1; 
    }
    
    int k = atoi(argv[1]);
    
    printf("plaintext: ");
    string message = get_string();
    printf("ciphertext: ");
    
    
    
    for (int i = 0; i < strlen(message); i++) {
        
        char crypted = 0;
        
        if (islower(message[i]) && message[i] + k < 123 )
            {
                 crypted = message[i] + k;
                 
                 
            } else if ( islower(message[i]))
                {  crypted = ((message[i] - 97) + k)%26 +97;
                
                
                //+ (k % 26) - 122;
                    
                
                }
                else if (isupper(message[i]) && message[i] + k < 91) 
                    {  crypted = message[i] + k;
                        
                        }
                        else if (isupper(message[i])) 
                            {  crypted = ((message[i] -65) + k)%26 +65;
                            
                            
                            
                            //+ (k % 26) - 91; }
                            
                            }
                            
                            else if (isspace(message[i])) {
                                crypted = message[i];
                            }
                            
                            else if (isxdigit(message[i])) {
                                crypted = message[i];
                            }
                            
                            else if (ispunct (message[i])) {
                            crypted = message[i];
                            }
            
                            else if (isblank (message[i])) {
                            crypted = message[i];
                            }
        
        
        
    
        
        printf("%c", crypted);
        
        
    }
    
    printf("\n"); 
    
}
