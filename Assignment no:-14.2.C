Q2. Write a function to calculate simple interest. (TSRS)


#include<stdlib.h>
float a(int, int, int);
int main () 
{
 int p,r,t;
 float si;
 printf("Enter a p,r and t");
 scanf("%d %d %d",&p,&r,&t);
 si=a(p,r,t);
 printf("si=%.2f",si);
}

float a( int m, int n, int o) 
{
float x;
x=(m*n*o)/100.0;
return x;
}