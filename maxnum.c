#include <stdio.h>
#include <limits.h>

int main()
{
	int n; // variable 'n' to hold number of elements
	int max_num=INT_MIN; // max_num to hold maximum number of all
	int num; // 'num' to read single number entered by user
	int i; // 'i' to iterate in for loop 
	
	// Display message to enter number of elements
	printf("How many numbers do you want to enter? ");
	scanf("%d", &n); // Read number in 'n'
	
	// Display message to enter numbers one by one
	printf("Enter %d numbers one by one: ", n);
	
	// Read number one by one and compute maximum number of them
	for(i=1; i<=n; i++) {
		scanf("%d", &num); // Read number
		
		if(num > max_num)  // If entered number is greater than max_num, update max_num
			max_num = num;
	}
	
	// Display maximum number of all 
	printf("Maximum number = %d\n", max_num);
	
	return 0;
}
    