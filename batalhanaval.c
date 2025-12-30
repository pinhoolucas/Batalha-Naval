/*
-> Matriz 10x10 representando o tabuleiro
-> zero representa a água
-> as posições ocupadas pelos navios são representadas pelo número 3

*/


#include <stdio.h>

int main ()
{
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
        for(int j=0; j<10; j++) // j == imprimir as colunas
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\t\n"); //Quando termina de imrpimir uma linha, pula pra linha de baixo
    }



    return 0;
}
