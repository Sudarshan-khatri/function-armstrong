#include<stdio.h>
#include<math.h>
int prod(int ,int );
int main()
{
	int a,b,result;
	printf("enter the number\n");
	scanf("%d%d",&a,&b);
	result=prod(a,b);
	return 0;
}
int prod(int x,int y) 
{
	if(y==0)
	{
		return 1;
	}
	else
	{
		return (x * prod(x,y  ));  
	}
}
