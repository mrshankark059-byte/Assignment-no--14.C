Q2. Write a function to calculate simple interest. (TSRS)


#include<stdlib.h>
int a(int, int, int);
int main () 
{
 int p,r,t;
 float si;
 printf("Enter a p,r and t");
 scanf("%d %d %d",&p,&r,&t);
 si=a(p,r,t);
 printf("si=%.2f",si);
}

int a( int m, int n, int o) 
{
int x;
x=(m*n*o)/100.0;
return x;
}