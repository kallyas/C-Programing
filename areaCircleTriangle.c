/*C Program to compute the area and perimeter of a rectangle*/
#include <stdio.h>

int main()
{
    int l,w;
    float area,peri;
    
    printf("enter length\n");
    scanf("%d",&l);
    printf("enter width\n");
    scanf("%d",&w);         
    area=l*w;           //area of rectangle is length*width
    peri=2*(l+w);       //perimeter of rectangle is 2*(length+width)
    printf("Area: %f\n",area);
    printf("Perimeter: %f",peri);
    
    return 0;
}



