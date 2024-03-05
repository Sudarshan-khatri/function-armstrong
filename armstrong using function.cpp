#include<stdio.h>
#include<math.h>
int armstrong(int);
int main()
{
	int num,result;
	printf("enter the number\n");
	scanf("%d",&num);
	result=armstrong(num);
	if(result==num)
	{
		printf("number is armstrong\n");
	}
	else
	{
		printf("number is armstrong\n");
	}
	return 0;
}
int armstrong(int n)
{
	int sum=0,mod,temp=0,count=0;
	temp=n;
	if(n>0)
	{
		count++;
	}
	if(temp>0)
	{
		mod=temp%10;
		sum=sum+pow(mod,count);
		temp=temp/10;
	}
	return sum;
}
