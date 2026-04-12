Q4. Write a function to print first N natural numbers (TSRN)



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
for(int n=1;n<=m;n++) 
printf("%d\n",n);
}


