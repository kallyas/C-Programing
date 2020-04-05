#include <stdio.h>

int main()
{
	int num; // Declare variable 'num' to hold value of number
	int i; // Declare variable 'i' to be used in for loop
	
	printf("Enter a number:"); // Display message to enter a number
	scanf("%d", &num); // Read number
	
	/* Loop from 1 to 10, and print single entry of multiplication table
	 * of given number in each iteration of loop.
	 */
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n", num, i, num*i);
	}
	
	return 0;
}
