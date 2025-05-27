#include <stdio.h>

int main() {
    int limite;
    int a = 0;
    int b = 1;
    int suivant;

    printf("Entrez la valeur limite : ");
    scanf("%d", &limite);

    printf("Fibonacci : ");

    // Gérer le cas où la limite est 0 ou 1
    if (limite >= 0) {
        printf("%d", a);
    }
    if (limite >= 1) {
        printf(" %d", b);
    }

    suivant = a + b;

    while (suivant <= limite) {
        printf(" %d", suivant);
        a = b;
        b = suivant;
        suivant = a + b;
    }

    printf("\n");

    return 0;
}