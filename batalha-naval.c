
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int mapa[10][10]={0};
    int linha = 10, coluna = 10;
    char letra = 'a';
    int i = 0, j = 0, num = 0;

    int barco1[3]={3,3,3};
    int barco2[3]={3,3,3};

    int coluna_b1 = 1;
    int linha_b1 = 4;
    //barco linha
    for ( i = 0; i < 3; i++){
        mapa[coluna_b1][linha_b1 + i] = barco1[i];
    }

    //barco coluna
    int coluna_b2 = 5;
    int linha_b2 = 8;
    for ( i = 0; i < 3; i++){
        mapa[coluna_b2 + i][linha_b2] = barco2[i];
    }

    

    printf("\t");
    for(int k = 0; k < 10; k++){
        printf("%c\t",letra);
        letra++;
    }
    printf("\n");
    for(i = 0; i < linha ; i++){
        printf("%d\t",++num);
        for (j = 0;j < coluna; j++)
        {
            printf("%d\t",mapa[i][j]);
        }
        
        printf("\n");
    }

      return 0;
}
