/*question no 6*/
#include<stdio.h>
struct student_rec{
	char name[30];
	int roll_no;
	struct mark{
		int math;
		int c_pro ;
		int english;
	}num;
};
int main()
{
	int i;
	struct student_rec std[5];
	for(i=0;i<5;i++)
	{
		printf("enter the student name\n");
		scanf("%s",&std[i].name);
		fflush(stdin);
		printf("enter the student roll no\n");
		scanf("%d",&std[i].roll_no);
		fflush(stdin);
		printf("enter the mark of  math\n");
		scanf("Math:%d",&std[i].num.math);
		fflush(stdin);
		printf("enter  the mark of c_programming\n");
		scanf("C_pro:%d",&std[i].num.c_pro);
		fflush(stdin);
		printf("enter the mark of english\n");
		scanf("English:%d\n",&std[i].num.english);	
	}
	for(i=0;i<5;i++)
	{
		if(std[i].num.c_pro>35)
		{
			printf(" Name:%s\n",std[i].name);
			printf("Roll_no:%d\n",std[i].roll_no);
			printf("Math_no:%d\n",std[i].num.math);
			printf("C_pro:%d\n",std[i].num.c_pro);
			printf("English:%d\n",std[i].num.english);
		}
	}
}
