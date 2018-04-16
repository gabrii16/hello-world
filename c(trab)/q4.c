#include <stdio.h>

int func (int matriz[6][6])
{
	int i,j;
	for (i = 0; i<6 ; i++)
	{
		for(j=0;j<6;j++)
		{
			if(matriz[i][j]!=matriz[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}