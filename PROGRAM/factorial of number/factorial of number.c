#include<stdio.h>
long int fact(int n);
int main()
{
int n;
printf("enter number");
scanf("%d",&n);
printf("factorial of numberis %ld" ,fact(n));	
}
long int fact(int n)
{
if(n<=1)
{
return(01);
}
else
{
n=n*fact(n-1);
return(n);	
}
}