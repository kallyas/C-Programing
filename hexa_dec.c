#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int num=0; // variable to hold decimal number
    char hex[100]; // variable to hold hexadecimal value
    char hexdigit; // variable to hold individual hexadecimal digit
    int i=0; // variable counter to calculate power of 2
    int len;
    
    printf("Enter hexadecimal number:"); 
    scanf("%s", hex); // Read hexadecimal number as string into 'hex'
    
    len = strlen(hex);
    for(i=0; i<len; i++) {
      hexdigit = hex[len-i-1];
      
      //if it is 0-9 digit
      if(hexdigit>='0' && hexdigit<='9')
        num += (hexdigit-'0') * pow(16, i);
      else 
        num += (hexdigit-'A'+10) * pow(16, i);
        
    }
    
    printf("Decimal number: %d", num);
    return 0;
}

