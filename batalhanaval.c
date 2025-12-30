/*
-> Matriz 10x10 representando o tabuleiro
-> zero representa a água
-> as posições ocupadas pelos navios são representadas pelo número 3

*/


#include <stdio.h>

int main ()
{
    int linhas[10] = {0,1,2,3,4,5,6,7,8,9};
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};

    //Criação do Tabuleiro Vazio
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
    
    //Imprimir o tabuleiro na tela 
    for(int i=0; i<10; i++) // i == imprimir as linhas
    {
        
        if(i==0)
        {
            printf("\t  ");
            for(int i=0; i<10; i++)
            {
                printf(" %c", colunas[i]);
            }
            printf("\n\n");
        }
        
        printf("\t%d  ", linhas[i]); //imprime o numero da linha ao lado do tabuleiro
        
        for(int j=0; j<10; j++) // j == imprimir as colunas
        {
            printf("%d ", tabuleiro[i][j]);
        }
        
        printf("\n"); //Quando termina de imrpimir uma linha, pula pra linha de baixo
        
    }



    return 0;
}
