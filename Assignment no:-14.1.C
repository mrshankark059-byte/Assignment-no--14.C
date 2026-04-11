Q1. Write a function to calculate the area of a circle. (TSRS)




#include<stdlib.h>
int a(int m);
int main()
{
 int r;
 printf("Enter the radius of circle");
 scanf("%d",&r);
 int y;
 y=a(r);
 printf("%d",y);
 
}
int a(int m) 
{
int n;
n=3.14*m*m;
//printf("x=%d",x);
return n;
}


