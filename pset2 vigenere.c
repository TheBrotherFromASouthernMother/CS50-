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
    
    
    string keyword = argv[1];
    
   
    
    
    
    printf("plaintext: ");
    string message = get_string();
    printf("ciphertext: ");
    
    
    
    for (int i = 0, j = 0; i < strlen(message); i++, j++) {
        
        char k = (keyword[j]);
        char crypted = 0;
        
         if(j > strlen(keyword) -1) {
                j = 0;
            }
            
       
        
         if ( islower(message[i] ))
               
                {  k = tolower(keyword[j]) -97;
                    
                crypted = ((message[i] - 97) + k)%26 +97;
                
                }
              
          else if (isupper(message[i])) 
                         
                  {  k = tolower(keyword[j])-97;
                                
                    crypted = ((message[i] -65) + k)%26 +65;
                            
                            
                  }
                            
        
                  else if (isspace(message[i])) {
                      
                      j = j-1;
                
                  
                  crypted = message[i];
                  }
                            
                  else if (isxdigit(message[i])) {
                  crypted = message[i];
                  }
                            
                  else if (ispunct (message[i])) {
                      j = j-1;
                
                  crypted = message[i];
                  }
            
                  else if (isblank (message[i])) {
                  crypted = message[i];
                  }
        
        
        
    //xoqmd, rby gflkp!" using "baz" as keyword
    //rjects Hax0r2"
        
        printf("%c", crypted);
        
    
    }
    
    printf("\n"); 
    
}
