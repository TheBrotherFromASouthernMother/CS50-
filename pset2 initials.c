#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h> 


int main (void) {
    
    
    string name = get_string();
    

    printf("%c", toupper(name[0]));
    
    for (int i = 0; i < strlen(name); i++) {
        
        
       if ( name[i-1] == ' ' && name[i] != '\0')
        
        printf("%c", toupper(name[i]) );
        
    } 
    
    printf("\n");
   
}
