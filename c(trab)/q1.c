#include <stdio.h>

void (float matriz[][],float matrizr[][])
{
    int i=0,j=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<5;j++)
        {
            matriz[i][j]=matriz[j][i];
        }
    }
}
