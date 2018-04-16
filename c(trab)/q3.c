#include <stdio.h>

void mat(int matriz[5][5])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            matriz[i][j]=j+i+1;
        }
    }
}

int main()
{
	int matriz[5][5],i,j;

	mat(matriz);
	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("o resultado da matriz %i coluna %i e %i\n",i,j,matriz[i][j]);
		}
	}
}

