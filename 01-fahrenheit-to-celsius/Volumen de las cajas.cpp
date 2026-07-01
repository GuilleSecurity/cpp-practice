#include <stdio.h>
//Cálculo del peso volumétrico de una caja
int main ()
{
    int altura, longitud, anchura, volumen, peso; // declaramos variables
    //Luego le asignamos valor y el calculo correspondiente
    altura = 8;
    longitud = 12;
    anchura = 10;
    volumen = altura * longitud * anchura;
    peso = (volumen + 165) / 166;
    // salida en base a printf "lo que quremos ver o cartel, luego el %d para numero correspondiente y variables
    printf("Dimensiones:%dx%dx%d\n", longitud,anchura,altura);
    printf("Volumen(pulgadas cubicas): %d\n", volumen);
    printf("Peso volumetrico (libras): %d\n", peso);
    return 0;
}
