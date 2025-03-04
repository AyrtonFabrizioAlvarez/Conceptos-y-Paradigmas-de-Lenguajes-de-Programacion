#include <stdio.h>

int main() {
    int resultado1 = sumar(3, 5);
    printf("El resultado estático es: %d\n", );

    int resultado2 = 10 / 0;
    printf("El resultado dinámico es: %d\n", resultado2);

    return 0;
}

int sumar(int a, int b) {
    return a + b;
}