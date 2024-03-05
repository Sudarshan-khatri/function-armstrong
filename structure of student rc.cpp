/* question no 6*/
#include<stdio.h>
struct student{
	char name[40];
	char faculty[30];
	char email[30];
	int mark;
};
int main()
{
	int i,j;
	struct student std[5],temp;
	for(i=0;i<5;i++)
	{
		printf("enter the student name\n");
		scanf("%s",&std[i].name);
		fflush(stdin);
		printf("enter the student faculty\n");
		scanf("%s",&std[i].faculty);
		fflush(stdin);
		printf("enter the student email\n");
		scanf("%s",&std[i].email);
		fflush(stdin);
		printf("enter the mark\n");
		scanf("%d",&std[i].mark);
	}
	for(i=0;i<5;i++)
	{
		{
			for(j=i+1;j<5;j++)
			{
		     if(std[i].mark>std[j].mark)
		     {
		     	temp=std[i];
		     	std[i]=std[j];
		     	std[j]=temp;
			    }
	    	}
	    }
	}
	printf("the record of student on the basis of mark\n\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",std[i].name);
		printf("%s\n",std[i].faculty);
		printf("%s\n",std[i].email);
		printf("%d\n\n",std[i].mark);
	}
}

