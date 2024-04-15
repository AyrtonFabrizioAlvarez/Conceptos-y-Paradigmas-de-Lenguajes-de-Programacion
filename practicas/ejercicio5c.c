# include <stdio.h>
int suma; /* Esta es una variable global */
int main()
{ int indice;
encabezado;
for (indice = 1 ; indice <= 7 ; indice ++)
cuadrado (indice);
final(); Llama a la función final */
return 0;
} 
cuadrado (numero)
int numero;
{ int numero_cuadrado;
numero_cuadrado == numero * numero;
suma += numero_cuadrado;
printf("El cuadrado de %d es %d\n",
numero, numero_cuadrado);
} 
