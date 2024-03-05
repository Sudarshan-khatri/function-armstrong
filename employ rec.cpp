/*question no 24*/
 #include<stdio.h>
int sum(int);
int main()
{
	int n,result;
	printf("enter the number\n");
	scanf("%d",&n);
	result=sum(n);
	printf("the sum is %d",result);
	return 0;
}
int sum (int x)
{
	if(x==0){
		return 0;
	}
	else{
		return (x+sum(x-1));
	}
}
