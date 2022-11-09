#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double x); // Prototipo de mi función f(x)

int main(){

    // Entradas:
    int i=0,iter_max; // Variables de control
    double x_izquierda, x_derecha, x_aprox=0, error_aprox,x_anterior,prueba,error_min;

    printf("\n\t <<<<< Metodo de biseccion >>>>>>>>");
    printf("\n\n\t x izquierda: "); scanf("%lf",&x_izquierda);
    printf("\n\t x derecha: "); scanf("%lf",&x_derecha);
    printf("\n\t Iteraciones maximas: "); scanf("%d",&iter_max); // Numero de veces que quieres repetir el método numérico
    printf("\n\t Error minimo: "); scanf("%lf",&error_min);

    // Cálculos y control:

    if(f(x_izquierda)*f(x_derecha)>0){
        printf("\n\t No hay raiz en ese intervalo...");
    }else{
        printf("\n\t Iteracion  Raiz  Error");

        do{
            i++;
            x_anterior=x_aprox;
            x_aprox=(x_izquierda+x_derecha)/2;
            error_aprox=(fabs((x_aprox-x_anterior))/x_aprox)*100; // fabs solo funciona con math.h
            prueba=f(x_izquierda)*f(x_aprox);

            if(prueba<0){
                x_derecha=x_aprox;
            }else if(prueba>0){
                x_izquierda=x_aprox;
            }else{
                error_aprox=0;
            }

            printf("\n\t %d    %lf    %lf",i,x_aprox,error_aprox);

        }while(error_aprox>error_min && i<iter_max);
    }

    printf("\n\n");
    return 0;
}

double f(double x){
    return pow(x,2)-2; // pow sólo funciona con math.h
}
