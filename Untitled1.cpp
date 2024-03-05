#include<stdio.h>
int main()
{
	int n,a,b,sum,sub,prod,div;
	printf("enter the number\n");
	scanf("%d",&n);
	switch(n)
		{
			case 1:
			printf("enter the number\n");
			scanf("%d%d",&a,&b);
			sum=a+b;
			printf("the sum is %d",sum);
			break;
			case 2:
			printf("enter the number\n");
			scanf("%d%d",&a,&b);
			sub=a-b;
			printf("the subtraction is %d",sub);
			break;
			case 3:
			printf("enter the number\n");
			scanf("%d%d",&a,&b);
			prod=a*b;
			printf("the product is %d",prod);
			break;
			case 4:
			printf("enter the number\n");
			scanf("%d%d",&a,&b);
			div=a/b;
			printf("the division is %d",div);
			default :
			printf("we are really sorry");
		}
}
/* program to find number is prime or not */
#include<stdio.h>
int prime_not(int);
//int main()
{
	int n,result;
	printf("enter the number");
	scanf("%d",&n);
	result=prime_not(n);
	if(result==1)
	{
		printf("number is prime\n");
	}
	else
	{
		printf("number is not prime");
	}
}
int prime_not(int x)
{
	int i,count;
	for(i=0;i<x/2;i++)
	{
	 count++;
	}
	if(count==2)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
