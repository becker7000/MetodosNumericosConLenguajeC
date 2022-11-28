#include<stdio.h>
#include<time.h>

int main(){

    int MATRIX_A[3][3],MATRIX_B[3][3];
    int i,j;
    srand(time(NULL));

    // Se generan dos matrices de numeros aleatorios entre 0 y 70 
    // y se imprimen en consola

    printf("\n\n\t Matriz A: ");
    for(i=0;i<3;i++){
        printf("\n\n");
        for(j=0;j<3;j++){
            MATRIX_A[i][j]=rand()%71;
            printf("\t %d",MATRIX_A[i][j]);
        }
    }

    printf("\n\n\t Matriz B: ");
    for(i=0;i<3;i++){
        printf("\n\n");
        for(j=0;j<3;j++){
            MATRIX_B[i][j]=rand()%71;
            printf("\t %d",MATRIX_B[i][j]);
        }
    }

    // Algoritmo para sumar las matrices:
    int MATRIX_SUMA[3][3];
    printf("\n\n\t La suma de las matrices A y B es: ");
    for(i=0;i<3;i++){
        printf("\n\n");
        for(j=0;j<3;j++){
            MATRIX_SUMA[i][j]=MATRIX_A[i][j]+MATRIX_B[i][j];
            printf("\t %d",MATRIX_SUMA[i][j]);
        }
    }


    printf("\n\n");
    return 0;
}
/*

    A:
    1 4 5
    3 8 9
    5 2 8

    B:
    0 4 7
    9 8 3
    7 6 5

    A+B:
    1   8   12
    12  16  12
    12  8   13

*/



