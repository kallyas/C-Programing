#include <stdio.h>
#include <math.h>

int main()
{
    int num=0; // variable to hold decimal number
    int oct; // variable to hold octal value
    int octdigit; // variable to hold individual octal digit
    int i=0; // variable counter to calculate power of 2
    
    printf("Enter octal number:"); 
    scanf("%d", &oct); // Read number into 'oct'
    while(oct){ // loop until bin isn't 0
      octdigit = oct%10;      //extract single octal digit 
      num += octdigit*pow(8, i); 
      oct = oct/10; // divide num by 10 to get next digit of octal
      i++;  // increment conuter
    }

    printf("Decimal number: %d", num);
    return 0;
}

