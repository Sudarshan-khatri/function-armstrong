#include<stdio.h>
#include<stdin>
int  prime_not(int );
int main()
{
	int n,result;
	printf("enter thenumber\n");
	scanf("%d", &n);
	result=prime_not(n);
	if(result==1)
	{
		printf("number is prime\n");
	}
	else
	{
		printf("number is not prime\n ");
	}
}
int prime_not(int n)
{
	int i,count=0;
	if(n==1||n==0)
	{
		printf("number both prime and not prime");
		exit();
	}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
		if(count==0)
		{
	 return 1;
	}
		
		else
		{
	return 0;
		}
	}
}
