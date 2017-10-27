// Enter a llower and upper limit and using switch, find sum of numbers that are either armstrong or prime or divisible of 7

#include<stdio.h>
#include<conio.h>
#include<math.h>
int armst(int ll, int ul)
{
	int num,temp1,temp2,arms=0,sum=0,deg=0,rem;
	
	for(num=ll;num<=ul;num++)
	{
		temp1=num;
		deg=0;
		while(temp1>0)
		{
			temp1=temp1/10;
			deg++;
		}
		arms=0;
		temp2=num;
		while(temp2>0)
		{
			rem=temp2%10;
			arms=arms+pow(rem,deg);
			temp2=temp2/10;
		}
		
		if(arms==num)
		{
			printf("%d is armstrong\n",num);
			sum=sum+arms;
		}
		else
		{
			printf("%d is not armstrong\n",num);
		}
		
	}
	return sum;
}

int div(int ll, int ul)
{
	int num=0,sum=0;
	for(num=ll;num<=ul;num++)
	{
		if(num%7==0)
		{
			sum=sum+num;
		}
	}
	return sum;
}

int prime(int ll, int ul)
{
	int num=0,sum=0,flag=0,k;
	for(num=ll; num<=ul; ++num)
   {
    flag=0;
    for(k=2; k<=num/2; k++)
   {
        if((num % k) == 0){
        flag++;
        break;
        }
    }
   if(flag==0)
   sum=sum+num;
   }
   return sum;
}


main()
{
	int ll,ul,result;
	char ch;
	
	printf("Enter lower limit  ");
	scanf("%d",&ll);
	
	printf("Enter upper limit  ");
	scanf("%d",&ul);
	
	printf("Enter --> a - armstrong, p - prime, d - 7 divisible \n");
	scanf("\n%c",&ch);
	
	switch(ch)
	{
		case 'a' :
			result=armst(ll,ul);
		break;
		
		case 'p' :
			result=prime(ll,ul);
		break;
		
		case 'd' :
			result=div(ll,ul);
		break;
	}
		
	printf("SUM is %d",result);
}
