#include<stdio.h>
int main()
{
	int n,count,i;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=100;i<200;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			printf("number is prime \n");
		}
		else
		{
			printf("number is not prime\n");
		}
}
