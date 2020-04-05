/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <unistd.h>

struct address {
    char city[20];
    int pin;
    char phone[14];
};

struct employee {
  char name[20];
  struct address add;
};

int main()
{
    struct employee emp;  
    printf("Enter employee information?\n");  
    scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone);  
    printf("Printing the employee information....\n");  
    sleep(5);
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone); 

    return 0;
}

