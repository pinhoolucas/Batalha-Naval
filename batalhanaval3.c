#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main (){

int tabuleiro[10][10] = {0};
int cone[3][5] = {0};
int cruz[5][5] = {0};
int vet_unitario[3] = {7}, sobreposicao=0;
int losango [5][5] = {0};
char cabecalho[10] = {'A','B','C','D','E','F','G','H','I','J'};
int linhas[10] = {0,1,2,3,4,5,6,7,8,9};

int linha_cone = 0, coluna_cone = 1;
int linha_cruz = 3, coluna_cruz = 5;
int linha_losango= 4, coluna_losango = 0;

/*=====ESTRUTURA DO CONE 3X5  (1)=====*/
printf("\t----> HABILIDADE CONE\n\n");
for(int i=0; i<3; i++){
    printf("\t\t");
    for(int j=0; j<5; j++){
        
        cone[i][j]=0;
        
        if(i==0 && j== 2){
            cone[i][j]=1;
        }
        if(i==1 && j!=0 && j!=4){
            cone[i][j]=1;
        }
        if(i==2){
            cone[i][j]=1;
        }
        printf("%d ", cone[i][j]);
    }
    printf("\n");
}

// --> Verificando sobreposição do Cone
sobreposicao = 0;

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){
        if(tabuleiro[linha_cone + i][coluna_cone + j] != 0){
            sobreposicao = 1;
        }
    }
}

// --> Copiando o Cone APENAS se não houver sobreposição
if(sobreposicao==0){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            tabuleiro[linha_cone + i][coluna_cone + j] = cone[i][j];
        }
    }
}


printf("\n");

/*=====ESTRUTURA DO CRUZ 5X5  (5)=====*/
printf("\t----> HABILIDADE CRUZ\n\n");
for(int i=0; i<5; i++){
    printf("\t\t");
    for (int j=0; j<5; j++){
        
        cruz[i][j]=0;
        
        if(i==2){
            cruz[i][j]=5;
        }
        if(j==2){
            cruz[i][j]=5;
        }
        printf("%d ", cruz[i][j]);
    }
    printf("\n");
}

// --> Verificando sobreposição da Cruz
sobreposicao = 0;

for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        if(tabuleiro[linha_cruz + i][coluna_cruz + j] != 0){
            sobreposicao = 1;
        }
    }
}

// --> Copiando a cruz APENAS se não houver sobreposição
if(sobreposicao==0){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            tabuleiro[linha_cruz + i][coluna_cruz + j] = cruz[i][j];
        }
    }
}

printf("\n");

/*=====ESTRUTURA DO Losango 5X5 (7)=====*/
printf("\t----> HABILIDADE LOSANGO\n\n");
for(int i=0; i<5; i++){
    printf("\t\t");
    for(int j=0; j<5; j++){
        
        losango[i][j]=0;
        
        if(i==2){
            losango[i][j]=7;
        }
        if(j==2){
            losango[i][j]=7;
        }
        if(i == 1 && j == 1){
            losango[i][j]= 7;
        }
        if(i == 1 && j == 3){
            losango[i][j]= 7;
        }
        if(i == 3 && j == 1){
            losango[i][j]= 7;
        }
        if(i == 3 && j == 3){
            losango[i][j]= 7;
        }
        printf("%d ", losango[i][j]);
    }

    printf("\n");
}

// --> Verificando sobreposição do Losango
sobreposicao = 0;

for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        if(tabuleiro[linha_losango + i][coluna_losango + j] != 0){
            sobreposicao = 1;
        }
    }
}

// --> Copiando o Losango APENAS se não houver sobreposição
if(sobreposicao==0){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            tabuleiro[linha_losango + i][coluna_losango + j] = losango[i][j];
        }
    }
}

/*=====ESTRUTURA BÁSICA DO TABULEIRO=====*/

if(sobreposicao == 1){
    printf("\n\tERRO: SOBREPOSICAO!\n");
}


for(int i=0; i<LINHA; i++){

    if(i==0){
        printf("\n\t   ");
        for(int a=0; a<10; a++){
            printf("%c ", cabecalho[a]);
        }
        printf("\n\n");
    }

    printf("\t%d  ", linhas[i]);

    
    for(int j=0; j<COLUNA; j++){
        printf("%d ", tabuleiro[i][j]);
    }
    
    printf("\n");
    
}

    return 0;
}
