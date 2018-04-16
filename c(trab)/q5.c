#include <stdio.h>

void func (int mat [10][8],int res[8])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for (j = 0; j < 8; ++i)
		{
			res[j]=res[j]+mat[i][j];
		}
	}
}