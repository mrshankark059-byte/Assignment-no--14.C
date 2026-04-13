Q5.  Write a function to print first N odd natural numbers. (TSRN)



#include<stdlib.h>
void a(int m);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    a(x);
}  

void a(int m) 
{
 int n;
 for(n=1;n<=m;n=n+2) 
  {
    printf("%d\n",n);
  }

}