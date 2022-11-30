#include<stdio.h>

int main(){

    float m[2][3]; // [filas][columas]
    int i,j;

    printf("\n\t Llena la matriz del sistema: ");
    printf("\n\t  Ejemplo: ");
    printf("\n\t\t m[1][1]x1 + m[1][2]x2 = m[1][3]");
    printf("\n\t\t m[2][1]x1 + m[2][2]x2 = m[2][3]");
    for(i=0;i<2;i++){
        printf("\n\n\t Ecuacion #%d: \n",i+1);
        for(j=0;j<3;j++){
            printf("\n\t m[%d][%d]: ",i+1,j+1); // Indices matemáticos
            scanf(" %f",&m[i][j]); // Indices con lenguaje C
        }
    }

    float x1=0,x2=0;
    float det_sis=m[0][0]*m[1][1]-m[0][1]*m[1][0];

    printf("\n\n\t La determinante del sistema es: %.2f",det_sis);
    if(det_sis=0){ // Determinante = 0
        printf("\n\n\t El sistema no tiene solucion...");
    }else{ 
        x1=(m[1][1]*m[0][2]-m[0][1]*m[1][2])/det_sis;
        x2=(m[0][0]*m[1][2]-m[1][0]*m[0][2])/det_sis;
        printf("\n\n\t El valor de x1 = %.2f ",x1);
        printf("\n\t El valor de x2 = %.2f ",x2);
    }
    
    printf("\n\n");
    return 0;
}

/*
    Sistema de ecuaciones:
    ax1 + bx2 = c
    dx1 + ex2 = f

    Matriz del sistema
    a b c
    d e f
    
    Matriz en C
    m[0][0]     m[0][1]     m[0][2]
    m[1][0]     m[1][1]     m[1][2]

    Matemática:
    m[1][1]     m[1][2]     m[1][3]
    m[2][1]     m[2][2]     m[2][3]

    1.#infinite

*/