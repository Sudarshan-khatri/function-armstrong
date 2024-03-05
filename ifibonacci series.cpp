#include<stdio.h>
int fibo(int);
int main()
{
	int num,result;
	printf("enter the number\n");
	scanf("%d",&num);
	result =fibo(num);
	return 0;
}
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}
