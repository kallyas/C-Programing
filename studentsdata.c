#include <stdio.h>
/*structure creation*/
struct student                  
    {
        char name[50];          // structure member1
        int id;                 // structure member2
        char branch[20];        // structure member3
        int age;                // structure member4
        char place[50];         // structure member5
    } std;                      // structure variable
int main()
{
    /*Taking information from keyboard and store it by using structure variable std*/
    printf("Enter Student Information\n");      
    printf("----------------------------\n");
    printf("enter name :");
    scanf("%s",std.name);               
   
    printf("enter id :");
    scanf("%d",&std.id);
    
    printf("enter branch name :");
    scanf("%s",std.branch);
    
    printf("enter age :");
    scanf("%d",&std.age);
    
    printf("enter location :");
    scanf("%s",std.place);
    
    /*Displaying student information */
     //Accessing information by using structure variable std
    printf("Displaying Student Information\n");
    printf("----------------------------\n");
    
    printf(" name: %s\n", std.name);       
    printf(" id: %d \n", std.id);
    printf(" branch: %s \n", std.branch);
    printf(" age: %d\n", std.age);
    printf(" place: %s \n", std.place);
    
    return 0;
}
