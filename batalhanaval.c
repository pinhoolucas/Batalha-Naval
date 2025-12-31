//transformar os navios em vetores unidimensionais 

#include <stdio.h>

int main ()
{
    int linhas[10] = {0,1,2,3,4,5,6,7,8,9};
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int navio_vertical[3] = {3,3,3}, linha_v = 5, coluna_v = 5;
    int navio_horizontal[3] = {3,3,3}, linha_h = 2, coluna_h  = 2;
    int sobreposicao=0;

    //Criação do Tabuleiro Vazio, zero = água
    int tabuleiro[10][10] = {

        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}

                             };
    
    //Navio Vertical
    for(int i=0; i<3; i++)
    {
        if(tabuleiro[linha_v+i][coluna_v]!=0)
        {
            sobreposicao++;
        }
        tabuleiro[linha_v+i][coluna_v]=navio_vertical[i];
    }
    
    //Navio Horizontal
    for(int i=0; i<3; i++)
    {
        if(tabuleiro[linha_h][coluna_h+i])
        {
            sobreposicao++;
        }
        tabuleiro[linha_h][coluna_h+i]=navio_vertical[i];
    }
    
    //Sobreposição dos navios
    if(sobreposicao!=0)
    {
        printf("\nERRO: SOBREPOSICAO DE NAVAVIOS\n\n");
    }
    
    //Imprimir o tabuleiro na tela 
    for(int i=0; i<10; i++) 
    {   
        // Imprimir Colunas de A-J na parte superior do tabuleiro
        if(i==0) 
        {
            printf("\t   ");
            for(int i=0; i<10; i++)
            {
                printf(" %c", colunas[i]);
            }
            printf("\n\n");
        }
        
        //imprime o numero da linha ao lado do tabuleiro
        printf("\t%d   ", linhas[i]); 
        
        for(int j=0; j<10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        
        printf("\n");
        
    }

    printf("\n");

    return 0;
}