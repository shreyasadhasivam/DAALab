#include<stdio.h>
int m,n,p,q;
void matrixmul(int A[m][n],int B[p][q],int C[m][q])
{
	//int m,n,p,q;
	//int A[m][n],B[p][q],C[][];
	int i,j,k;
	if(n==p)
	{
		for( i=0;i<m;i++)
		{
			for( j=0;j<q;j++)
				C[i][j]=0;
				for( k=0;k<p;k++)
					C[i][j] += A[i][k] * B[k][j];
				
		}
	}
}

int main()
{
	
	return 0;
}
