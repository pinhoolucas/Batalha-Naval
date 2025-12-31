#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main ()
{
    int tabuleiro [LINHA][COLUNA] = {0};
    int linhas[10] = {0,1,2,3,4,5,6,7,8,9};
    int sobreposicao = 0, fora_tabuleiro = 0;
    char cabecalho[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'};
    
    int navio1[3]={3,3,3}, linha1 = 0, coluna1 = 0; //Vertical
    int navio2[3]={3,3,3}, linha2 = 2, coluna2 = 6; //horizontal
    int navio3[3]={3,3,3}, linha3 = 5, coluna3 = 4; //diagonal p/ baixo e p/ direita
    int navio4[3]={3,3,3}, linha4 = 9, coluna4 = 0; //diagonal p/ cima e p/ direita

    //Colocando e validando navio 01
    for(int i=0; i<3; i++)
    {
        if(linha1>LINHA || linha1<0 || coluna1>COLUNA || coluna1<0)
        {
            fora_tabuleiro++;
        }
        if(tabuleiro[linha1+i][coluna1]!=0)
        {
            sobreposicao++;
        }
        tabuleiro[linha1+i][coluna1] = navio1[i];
    }
    //Colocando e validando navio 02
    for(int i=0; i<3; i++)
    {
        if(linha2>LINHA || linha2<0 || coluna2>COLUNA || coluna2<0)
        {
            fora_tabuleiro++;
        }
        if(tabuleiro[linha2][coluna2+i]!=0)
        {
            sobreposicao++;
        }
        tabuleiro[linha2][coluna2+i] = navio2[i];
    }
    //Colocando e validando navio 03
    for(int i=0; i<3; i++)
    {
        if(linha3>LINHA || linha3<0 || coluna3>COLUNA || coluna3<0)
        {
            fora_tabuleiro++;
        }
        if(tabuleiro[linha3+i][coluna3+i]!=0)
        {
            sobreposicao++;
        }
        tabuleiro[linha3+i][coluna3+i] = navio3[i];
    }
    //Colocando e validando navio 04
    for(int i=0; i<3; i++)
    {
        if(linha4>LINHA || linha4<0 || coluna4>COLUNA || coluna4<0)
        {
            fora_tabuleiro++;
        }
        if(tabuleiro[linha4-i][coluna4+i]!=0)
        {
            sobreposicao++;
        }
        tabuleiro[linha4-i][coluna4+i] = navio4[i];
    }

    if(sobreposicao != 0 )
    {
        printf("\n\tERRO: SOBREPOSICAO DE NAVIOS\n");
    }
    if(fora_tabuleiro != 0 )
    {
        printf("\n\tERRO: NAVIO FORA DO TABULEIRO\n");
    }
    
    
        //Imprimir tabuleiro
        for(int i=0; i<LINHA; i++)
        {
            //Imprimir cabeçalho
            if(i==0)
            {
                printf("\n\t    ");
                for(int a=0; a<COLUNA; a++)
                {
                    printf("%c ", cabecalho[a]);
                }
                printf("\n\n");
            }

            //imprimir numero da linha
            printf("\t%d   ", linhas[i]);

            //imprimir colunas
            for(int j=0; j<COLUNA; j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}