#include <stdio.h>

/*letra a*/
int tot (int mat[12][10])
{
    int i,j,tot=0;
    for(i=0;i<12;i++)
    {
        for(j=0;j<10;j++)
        {
            tot=tot+mat[i][j];
        }
    }
    return tot;
}

/*letra b*/

int mes(int mat[12][10],int mes)
{
    int i,j,qt;
    for(i=mes;i<mes+1;i++)
    {
        for(j=0;j<10;j++)
        {
        qt=qt+mat[i][j];
        }
    }
    return qt;
}

/*letra c*/

int func (int mat[12][10],int funcionario)
{
    int i,j,qt;
    for(i=0;i<12;i++)
    {
        for(j=funcionario;j<funcionario+1;j++)
        {
            qt=qt+mat[i][j];
        }
    }
    return qt;
}
 /*letra d*/

 int maior(int mat[12][10])
 {
     int i,j,maior=0,soma=0;
     for(i=0;i<12;i++)
     {
         for(j=0;j<10;j++)
         {
             soma=soma+mat[i][j];
             if(mes>maior)
             {
                maior=soma;
                mes=i+1
             }
         }
         soma=0
     }
     return mes;
 }

int funcio(int mat[12][10])
{
    int i,j,k,mes[10]=0,menor=9999909;
    for(i=0;i<12;i++)
    {
        for(j=0;j<10;j++)
        {
            mes[j]=mes[j]+mat[i][j];
            for(k=0;k=10;k++)
            {
                if(mes[k]<menor)
                {
                    menor=mes[k];
                }
            }
        }

    }
}
