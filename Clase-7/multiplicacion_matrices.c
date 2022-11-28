#include<stdio.h>

int main(){

    int i,j; // Variables de control
    int matA[3][3],matB[3][3],resultado[3][3];

    // Bloque para pedir la primera matriz:
    printf("\n\n\t Llena la primera matriz: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n\t A[%d][%d]: ",i+1,j+1);
            scanf("%d",&matA[i][j]);
        }
    }    

    // Bloque para pedir la segunda matriz:
    printf("\n\n\t Llena la segunda matriz: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n\t B[%d][%d]: ",i+1,j+1);
            scanf("%d",&matB[i][j]);
        }
    }

    // Bloque para imprimir la primera matriz:
    printf("\n\n\t Matriz A: \n");
    for(i=0;i<3;i++){
        printf("\n\n\t");
        for(j=0;j<3;j++){
            printf("  %d ",matA[i][j]);
        }
    }

    // Bloque para imprimir la segunda matriz:
    printf("\n\n\t Matriz B: \n");
    for(i=0;i<3;i++){
        printf("\n\n\t");
        for(j=0;j<3;j++){
            printf("  %d ",matB[i][j]);
        }
    }

    printf("\n\n\t Da click para multiplicarlas...");
    getch(); // Pone una pausa hasta que el usuario de click

    // Algoritmo para multiplicar dos matrices:
    int k,suma=0; // Indicies que van en medio 0,1,2
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            suma=0;
            for(k=0;k<3;k++)// Ejemplo matA[0][2]*matB[2][0]
                suma+=(matA[i][k]*matB[k][j]);
            resultado[i][j]=suma;
        }
    }

    // Imprimiendo la matriz resultado:
    printf("\n\n\t Matriz resultado: \n");
    for(i=0;i<3;i++){
        printf("\n\n\t");
        for(j=0;j<3;j++){
            printf("  %d ",resultado[i][j]);
        }
    }

    printf("\n\n");
    return 0;
}

/*
    TODO:
    a) Volver opcional la dimensión de las matrices, 
       siempre y cuando sean cuadradas
    b) Modular en 1 función el bloque para leer la matriz
    c) Modular en 1 función el bloque para imprimir la matriz
    d) Modular en 1 función el bloque para multiplicar las matrices
*/