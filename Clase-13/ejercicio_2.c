#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double x);

int main(){

    // Entradas:
    // i es una variable de control
    // iter_max son las iteraciones solicitadas
    int i=0,iter_max;
    double x_izq,x_der,x_aprox=0,error_ar,x_anterior,prueba;

    printf("\n\t Metodo de biseccion: ");
    printf("\n\t Funcion: f(x) = x^3 - x^2 - 32x + 73");
    printf("\n\n\t x izquierda: "); scanf("%lf",&x_izq); // 2
    printf("\n\t x derecha: "); scanf("%lf",&x_der); // 4
    printf("\n\t Iteraciones: "); scanf("%d",&iter_max); 

    // Procesos:
    if(f(x_izq)*f(x_der)>0){
        printf("\n\t No existe raiz en el intervalo [%.2lf,%2.lf].",x_izq,x_der);
    }else{

        printf("\n   Iteracion |x anterior | x izq | x der |  x aprox | Error RA | Prueba ");
        
        do{
            i++;
            x_anterior=x_aprox;
            x_aprox=(x_izq+x_der)/2;
            // Nota: En porcentaje multiplicar por 100
            error_ar=(fabs(x_aprox-x_anterior)/x_aprox)*100;
            prueba=f(x_izq)*f(x_aprox);

            // Validamos que será la x_aprox
            // si la nueva x_izq o la nueva x_der
            if(prueba<0){
                x_der=x_aprox;
            }else if(prueba>0){
                x_izq=x_aprox;
            }else{
                error_ar=0; // Caso en el que ya encontramos la raíz
            }

            // Salidas:
            printf("\n\t %d \t %.2lf \t   %.2lf    %.2lf     %.2lf     %.2lf \t %s",i,x_anterior,x_izq,x_der,x_aprox,error_ar,((prueba<0)? "Si" : "No"));

        }while(i<iter_max);

    }

    printf("\n\n");
    return 0;
}

double f(double x){
    // Linealización de la función f(x)
    return pow(x,3)-pow(x,2)-32*x+73;
}