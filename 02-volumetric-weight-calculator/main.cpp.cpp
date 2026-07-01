#include <stdio.h>
//Volumen de las cajas para ingresar datos
int main ()
 {
int alto, largo, ancho, volumen, peso;

printf("Ingrese alto de la caja: ");
scanf("%d", &alto);
printf("Ingrese largo de la caja: ");
scanf("%d", &largo);
printf("Ingrese ancho de la caja: ");
scanf("%d", &ancho);
volumen = alto * largo * ancho;
peso = (volumen + 165) / 166;

printf("El volumen (pulgadas cubicas):%d\n", volumen);
printf("El peso dimensional (libras):%d\n", peso);
return 0;
}
