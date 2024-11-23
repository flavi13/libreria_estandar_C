//
// Created by Flavia Rivero on 23/11/24.
//

#include "ejercicio_1.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void calcularValorAbsoluto(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        int abs_num = abs(nums[i]);
        printf("El valor absoluto de %d es %d\n", nums[i], abs_num);
    }
}
//apartado b
void generarNumerosAleatorios() {
    srand(time(0));
    int random_number1 = rand();
    printf("Número aleatorio: %d\n", random_number1);

    srand(42);
    int random_number2 = rand();
    printf("Número aleatorio con semilla 42: %d\n", random_number2);


}