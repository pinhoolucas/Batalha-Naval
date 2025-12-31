#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main ()
{
    int tabuleiro [LINHA][COLUNA] = {0};
    int linhas[10] = {0,1,2,3,4,5,6,7,8,9};
    char cabecalho[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'};
    
    int navio1[3]={3,3,3};
    int navio2[3]={3,3,3};
    int navio3[3]={3,3,3};
    int navio4[3]={3,3,3};

    //Imprimir tabuleiro
    for(int i=0; i<LINHA; i++)
    {
        //Imprimir cabeçalho
        if(i==0)
        {
            printf("\n\t   ");
            for(int a=0; a<COLUNA; a++)
            {
                printf("%c ", cabecalho[a]);
            }
            printf("\n\n");
        }

        //imprimir numero da linha
        printf("\t%d  ", linhas[i]);

        //imprimir colunas
        for(int j=0; j<COLUNA; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}