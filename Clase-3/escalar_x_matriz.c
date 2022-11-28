#include<stdio.h>
#include<time.h>

int main(){

    int matrix[3][3];
    srand(time(NULL)); // Modifica la semilla de los aleatorios

    printf("\n\t Generando una matriz aleatoria...");
    int i,j;
    
    for(i=0;i<3;i++){ // Filas
        printf("\n\n");
        for(j=0;j<3;j++){ // Columnas
            matrix[i][j]=rand()%51; // Se van generando numeros aleatorios
            printf("\t %d",matrix[i][j]);
        }
    }

    int escalar;
    printf("\n\t Dame un escalar para multiplicarlo por la matriz: ");
    scanf("%d",&escalar);
    printf("\n\t Matriz multiplicada por %d:",escalar);
    for(i=0;i<3;i++){ // Filas
        printf("\n\n");
        for(j=0;j<3;j++){ // Columnas
            matrix[i][j]*=escalar;
            printf("\t %d",matrix[i][j]);
        }
    }


    printf("\n\n");
    return 0;
}