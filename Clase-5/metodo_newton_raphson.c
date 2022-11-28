#include<stdio.h>
#include<math.h>

float f(float x); // Prototipo de la función 
float df_dx(float x); // Prototipo de la función

int main(){

    //Entradas:
    int i,iter_max;
    // xi <- valor inicial
    // fx <- la función
    // df <- derivada de la función
    float xi,fx,df; 

    // Instrucciones:
    printf("\n\t Dame el numero de iteraciones maximas: ");
    scanf("%d",&iter_max);
    printf("\n\t Dame el valor inicial de x: ");
    scanf("%f",&xi); // Este va a cambiar

    // Método iterativo:
    printf("\n\t Iteracion \t f(x) \t\t  df(x)/dx \t x_aprox");
    for(i=0;i<iter_max;i++){
        fx=f(xi); // Sustituimos el valor inicial en la función
        df=df_dx(xi); // Sustituimos el valor inicial en la derivada
        // Formula para iterar del método de newton-raphson:
        xi=xi-fx/df; // Se recalcula el valor inicial
        // Salidas: 
        printf("\n\t    %d \t\t %.4f \t %.4f \t %.6f ",i,fx,df,xi);

    }

    printf("\n\n");
    return 0;
}

// Definición de la función f(x)=2sen(x)-x
float f(float x){
    return 2*sin(x)-x;
}

// Definción de la función df(x)/dx <- derivada de f
float df_dx(float x){
    return 2*cos(x)-1;
}
