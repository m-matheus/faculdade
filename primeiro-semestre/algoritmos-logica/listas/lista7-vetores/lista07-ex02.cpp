#include <stdio.h>

int main(void) {
    int i, numeros[10];

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Numeros maiores que 50: ");
    for (i = 0; i < 10; i++) {
        if (numeros[i] > 50) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
    return 0;
}
