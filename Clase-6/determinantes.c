#include<stdio.h>

int main(){

    float matrix[3][3];
    printf("\n\t Llena la matriz de 3x3: ");

    int i,j;

    // Bloque para captar la matriz de 3x3:
    for(i=0;i<3;i++){//filas
        for(j=0;j<3;j++){
            printf("\n\t M[%d][%d] = ",i,j);
            scanf("%f",&matrix[i][j]);
        }
    }

    // Bloque para imprimir la matriz de 3x3:
    printf("\n\t Matriz capturada: ");
    for(i=0;i<3;i++){//filas
        printf("\n\n");
        for(j=0;j<3;j++){ // Columnas
            printf("\t %.2f",matrix[i][j]);
        }
    }


    float determinante=0; // Es una suma acumulada

    determinante+=(matrix[0][0]*matrix[1][1]*matrix[2][2]);
    determinante+=(matrix[1][0]*matrix[2][1]*matrix[0][2]);
    determinante+=(matrix[2][0]*matrix[0][1]*matrix[1][2]);
    determinante-=(matrix[2][0]*matrix[1][1]*matrix[0][2]);
    determinante-=(matrix[0][0]*matrix[2][1]*matrix[1][2]);
    determinante-=(matrix[1][0]*matrix[0][1]*matrix[1][2]);

    printf("\n\t La determinante de la matriz es: %.2f",determinante);

    if(determinante==0){
        printf("\n\t El sistema no tiene solucion...");
    }else{
        printf("\n\t El sistema tiene solucion...");
    }


    printf("\n\n");
    return 0;
}

/*
    pow
    exp
    abs
    sen
    cos
*/