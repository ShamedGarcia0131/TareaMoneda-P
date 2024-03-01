#include <stdio.h>
#include <stdlib.h>

/* Desarrolla un programa en C donde resuelva lo siguiente:

Crea un programa que te permita realizar el cambio de moneda de un monto dado por el usuario en pesos
a los siguientes denominaciones.

imprime en pantalla: ¿Cual de las denominaciones anteriores nos dara
mas dinero en su moneda y cual sera el menor?

*Dolares=16
*Euros=21
*Yenes=13
*Dolares canadienses
imprime en pantalla los resultados de cambio de moneda*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Datos de entrada 
    float yen, dolar, euro, cds;
    int pesos;

    // El título
    printf("Cambio de pesos a: YENES, DOLARES, EUROS y DOLARES CANADIENSES\n");

    // Pedir la cantidad de pesos
    printf("Ingresa la cantidad de pesos: ");
    
    // Lee y almacena
    scanf("%i", &pesos);
    
    // Proceso de la operación
    yen = pesos * 13.0;
    dolar = pesos/16.0;
    euro = pesos / 21.0;
    cds = pesos / 14.0;
    
    // Datos de salida
    printf("Tus pesos en yenes son... %f\n", yen);
    printf("Tus pesos en dolares son... %f\n", dolar);
    printf("Tus pesos en euros son... %f\n", euro);
    printf("Tus pesos en dolares canadienses son... %f\n", cds);
    
    // Comparación para encontrar el mayor
    if (yen > dolar && yen > euro && yen > cds) {
        printf("El mayor es el YEN\n");
    } else if (dolar > yen && dolar > euro && dolar > cds) {
        printf("El mayor es el dolar\n");
    } else if (euro > dolar && euro > yen && euro > cds) {
        printf("El euro es mayor\n");
    } else if (cds > yen && cds > dolar && cds > euro) {
        printf("El dolar canadiense es el mayor\n");
    } else {
        printf("Pon una cifra mayor a cero\n");
    }
    
    // Comparación para encontrar el menor
    if (yen < dolar && yen < euro && yen < cds) {
        printf("Es menor el yen\n");
    } else if (dolar < yen && dolar < euro && dolar < cds) {
        printf("Es menor el dolar\n");
    } else if (euro < yen && euro < dolar && euro < cds) {
        printf("El euro es menor\n");
    } else if (cds < yen && cds < dolar && cds < euro) {
        printf("El dolar canadiense es menor\n");
    } else {
        printf("Pon una cifra mayor a cero\n");
    }
    system("pause");
    return 0;
}
