/*question no 25 */
#include<stdio.h>
int fibonacci(int);
int main()
{
	int num,result;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("the result is %d",result);
	return 0;
}
int fibonacci(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-1)+fibonacc(n-2));
	}
}
