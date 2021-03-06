#include <stdio.h>

int main()
{
    int num; // 'num' variable to hold decimal number
    int oct_arr[100]; // array to hold octal value
    int i=0; // counter to iterate/index array elements
    
    printf("Enter decimal number:"); 
    scanf("%d", &num); // Read number into 'num'
    
    while(num){ // loop until num isn't 0
      oct_arr[i] = num%8; // num%8 will give single digit of octal 
      
      num = num/8; // divide num by 8 to get next digit of octal
      
      i++;  // increment countr to hold in next array element
    }

    printf("Octal number: ");
    while(i--){ // iterate over array from large index to 0
      printf("%d", oct_arr[i]); // print individual octal digits
    }
    return 0;
}


