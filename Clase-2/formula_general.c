#include<stdio.h>
#include<math.h>

int main(){

    // ax^2+bx+c=0
    double a,b,c;
    float x1,x2;
    double discriminante=0;

    // Para duplicar la línea:
    // alt+shift+abajo para Windows
    // option+shitf+abajo para Mac

    // Entradas:
    printf("\n\t Escribe los coeficiente de tu ecuacion: ");
    printf("\n\t\t a: ");  scanf("%lf",&a);
    printf("\n\t\t b: ");  scanf("%lf",&b);
    printf("\n\t\t c: ");  scanf("%lf",&c);

    // Cálculos y control
    discriminante=pow(b,2)-4*a*c; // Linealizando el discriminate...

    if(discriminante<0){
        printf("\n\t Las raices son complejas..."); // Salida
        //TODO: hacer el algoritmo para las raices compleja
    }else{

        if(discriminante==0)
            printf("\n\t Existe multiplicidad..."); // Salida

        x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("\n\t x1 = %.4f y x2 = %.4f",x1,x2); // Salida

    }

    printf("\n\n");
    return 0;
}

/*

    // ax^2+bx+c=0

    Ecuación con raices complejas:
    x^2+1=0   a=1,b=0,c=1

    Ecuación con raices reales iguales:
    x^2=0     a=1,b=0,c=0

    Ecuación con raices reales diferentes:
    x^2+5x+6=0    a=1,b=5,c=6

*/


/*

    Matriz de 2x2:

    14   89

    34   17

    det = 14*17-34*89=-2788
---------------------------------
    Matriz de 2x2 general:

    elemento[0][0]  elemento[0][1]
    elemento[1][0]  elemento[1][1]

    determinante = elemento[0][0]*elemento[1][1]-elemento[1][0]*elemento[0][1]
    determinante = matriz[0][0]*matriz[1][1]-matriz[1][0]*matriz[0][1]


*/














