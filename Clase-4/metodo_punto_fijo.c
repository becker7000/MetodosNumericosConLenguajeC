#include<stdio.h>
#include<math.h>

float g(float x); // Prototipo

/*  
    Aplicando el método de punto fijo 
    calcular la raíz de la función 
    f(x) = 2*e^(x^2)-5x con un valor 
    inicia de x=0, iterar hasta 10 máximo 
    o hasta que el error sea menor 0.01 (proporción).
*/

int main(){

    // Entradas: 
    float x_anterior=0,x_aprox,error_aprox=0;
    int i;

    // Control, iterando el método:
    // Nota: el ciclo termina si ya van 10 iteraciones
    // o el error aproximado es menor o igual a 0.01(1%)

    printf("\n\t Iteracion \t x_anterior \t x_aprox \t error_aprox");
    for(i=0;i<10;i++){
        x_aprox=g(x_anterior);
        error_aprox=fabs((x_aprox-x_anterior)/(x_aprox))*100; // Porcentaje 
        printf("\n\t    %d \t\t  %.4f  \t  %.4f  \t   %.2f%c",i,x_anterior,x_aprox,error_aprox,37);
        x_anterior=x_aprox;
        if(error_aprox<=1.0)
            break; // En caso de que el error sea menor o igual a 1% 
            // el ciclo terminará...
    }

    printf("\n\n");
    return 0;
}

// Definición
float g(float x){
    return 0.4*exp(pow(x,2));
}

/*
    Tarea: Usando el método numérico de punto fijo 
    calcular la raíz aproximada de f(x)=e^(-x)-x
    con un valor inicial de x = 0, iterar 10 veces o
    hasta que el error sea menor o igual al 1%.
    Hacerlo a manor primero y despues programarlo 
    y mostrar que funciona y coincide.
*/