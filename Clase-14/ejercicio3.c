#include<stdio.h>
#include<math.h>

float f(float x); // f(x)
float df_dx(float x); // Derivada df(x)/dx

int main(){

    // Entradas:
    int i,iter_max;
    float x_inicial,aux,fx,df; // xi (x inicial), fx (función), df (derivada)

    // Instrucciones:
    printf("\n\t Dame el numero de iteraciones: ");
    scanf("%d",&iter_max);
    printf("\n\t Dame el valor inicial de x: ");
    scanf("%f",&x_inicial);

    // Método iterativo:
    // TODO: transformar en función este bloque
    printf("\n\t Iteracion   x inicial     f(x)     f'(x)     Raiz ");
    for(i=0;i<iter_max;i++){
        aux=x_inicial;
        fx=f(x_inicial);
        df=df_dx(x_inicial);
        // Formula de Newton-Rapson
        x_inicial=x_inicial-fx/df;

        //TODO: Implementar el error relativo

        //Salidas:
        printf("\n\t    %d          %.3f     %.3f     %.3f    %.3f",(i+1),aux,fx,df,x_inicial);
    }

    printf("\n\n");
    return 0;
}

float f(float x){
    return pow(x,3)-pow(x,2)-32*x+73;
}   

// 3x^2 -2x -32
float df_dx(float x){
    return 3*pow(x,2)-2*x-32;
}