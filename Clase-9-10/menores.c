#include<stdio.h>
#include<math.h>

int main(){

    float matrix[3][3];
    int i,j;

    // Llenamos la matriz
    printf("\n\t Llena la matriz: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n\t m[%d][%d]: ",i+1,j+1);
            scanf("%f",&matrix[i][j]);
        }
    }

    // Imprimimos la matriz:
    printf("\n\n\t Matriz capturada: \n");
    for(i=0;i<3;i++){
        printf("\n\n\t ");
        for(j=0;j<3;j++){
            printf("  %.2f ",matrix[i][j]);
        }
    }

    // Algoritmo para generear la matriz de menores:
    int elem=0; // Variables de control para los menores
    int p,q;
    float menores[3][3];
    float aux[2][2];
    float det=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ // Indicies del elemento al que se le calcula el menor
            
            det=0;
            elem=0;
            // 1) Generar una submatriz de 2x2
            for(p=0;p<3;p++){
                for(q=0;q<3;q++){
                    if(p!=i && q!=j){
                        if(elem==0){
                            aux[0][0]=matrix[p][q];
                            elem++;
                        }else if(elem==1){
                            aux[0][1]=matrix[p][q];
                            elem++;
                        }else if(elem==2){
                            aux[1][0]=matrix[p][q];
                            elem++;
                        }else if(elem==3){
                            aux[1][1]=matrix[p][q];
                            elem++;
                        }
                    }
                }
            }

            // 2) Calculamos su determinante (menor)
            det=aux[0][0]*aux[1][1]-aux[1][0]*aux[0][1];
        
            // 3) Lo guardamos en la posición [i][j] de la matriz de menores
             menores[i][j]=det;

        }
    }   

    // Imprimimos la matriz de menores:
    printf("\n\n\t Matriz de menores: \n");
    for(i=0;i<3;i++){
        printf("\n\n\t ");
        for(j=0;j<3;j++){
            printf("  %.2f ",menores[i][j]);
        }
    }

    // Generando la matriz de cofactores:
    float cofactores[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ // Formula linealizada de los cofactores:
            cofactores[i][j]=pow(-1,(i+j))*menores[i][j];
        }
    }

    // Imprimimos la matriz de cofactores:
    printf("\n\n\t Matriz de cofactores: \n");
    for(i=0;i<3;i++){
        printf("\n\n\t ");
        for(j=0;j<3;j++){
            printf("  %.2f ",cofactores[i][j]);
        }
    }

    // Generando la matriz adjunta:
    // (Transpuesta de los cofactores)
    float adjunta[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ // Invertimos de posición los indices:
            adjunta[i][j]=cofactores[j][i];
        }
    }

    // Imprimimos la matriz adjunta:
    printf("\n\n\t Matriz de adjunta: \n");
    for(i=0;i<3;i++){
        printf("\n\n\t ");
        for(j=0;j<3;j++){
            printf("  %.2f ",adjunta[i][j]);
        }
    }

    // Algoritmo para calcular la determinante de la matriz
    // Método de Laplace
    float det_matrix=0;
    det_matrix+=matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2]);
    det_matrix-=matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[2][0]*matrix[1][2]);
    det_matrix+=matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[2][0]*matrix[1][1]);
    printf("\n\n\t Determinante de la matriz: %.2f",det_matrix);

    // Generamos la matriz inversa: 
    float inversa[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            inversa[i][j]=(((float)(1.0))/det_matrix)*adjunta[i][j];
        }
    }

    // Imprimimos la matriz inversa:
    printf("\n\n\t Matriz de inversa: \n");
    for(i=0;i<3;i++){
        printf("\n\n\t ");
        for(j=0;j<3;j++){
            printf("  %.2f ",inversa[i][j]);
        }
    }

    printf("\n\n");
    return 0;
}

/*

    Matriz A:
    1   2   3
    4   5   6
    7   8   9

    Transpuesta de A:
    1   4   7
    2   5   8
    3   6   9

*/