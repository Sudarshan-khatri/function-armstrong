#include<stdio.h>
void transpose(int [100][100],int ,int);
int main()
{
	int  matrix[100][100],i,j,m,n;
	printf("enter the row and column\n");
	scanf("%d%d",&m,&n);
	printf("enter the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("\t%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	transpose(matrix,m,n);
	return 0;
}
void transpose(int mat[100][100],int x,int y)
{
	int i,j,temp[100][100];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			temp[j][i]=mat[i][j];
		}
	}
	printf("\n enter the transposed matrix\n");
		for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d\t",temp[i][j]);
		}
		printf("\n");
	}
}
