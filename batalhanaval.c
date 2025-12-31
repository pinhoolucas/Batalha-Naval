/*
-> Matriz 10x10 representando o tabuleiro
-> zero representa a água
-> as posições ocupadas pelos navios são representadas pelo número 3

*/

//falta colocar os navios no tabuleiro
//falta fazer com condição de sobreposição dos navios


#include <stdio.h>

int main ()
{
    int linhas[10] = {0,1,2,3,4,5,6,7,8,9};
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int navio_vertical;
    int navio_horizontal;

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
    
    //Posicionamento do navio horizontal
    for(navio_horizontal=0; navio_horizontal<3; navio_horizontal++)
    {
        tabuleiro[2][1+navio_horizontal]=tabuleiro[2][1+navio_horizontal]+3;
        //A soma dentro do [] define a posição, enquanto a soma fora, aumenta o valor de zero para 3.
    }
    //Posicionamento do navio vertical
    for(navio_vertical=0; navio_vertical<3; navio_vertical++)
    {
        tabuleiro[5+navio_vertical][8]=tabuleiro[5+navio_vertical][8]+3;
        //A soma dentro do [] define a posição, enquanto a soma fora, aumenta o valor de zero para 3.
    }

    //Condição de sobreposição de navios
    for(int a=0; a<10; a++)
    {
        for(int b=0; b<10; b++)
        {
            if (tabuleiro[a][b]==6)
            {
                printf("\nErro: Houve sobreposicao de navios!\n");
            }
        }
    }
    
    
    //Imprimir o tabuleiro na tela 
    for(int i=0; i<10; i++) // i == imprimir as linhas
    {
        
        if(i==0) // Imprimir Colunas de A-J na parte superior do tabuleiro
        {
            printf("\t   ");
            for(int i=0; i<10; i++)
            {
                printf(" %c", colunas[i]);
            }
            printf("\n\n");
        }
        
        printf("\t%d   ", linhas[i]); //imprime o numero da linha ao lado do tabuleiro
        
        for(int j=0; j<10; j++) // j == imprimir as colunas
        {
            printf("%d ", tabuleiro[i][j]);
        }
        
        printf("\n"); //Quando termina de imrpimir uma linha, pula pra linha de baixo
        
    }

    printf("\n");

    return 0;
}
