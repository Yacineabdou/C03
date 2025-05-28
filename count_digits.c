#include <stdio.h>

int main() {
    int nombre;
    int compte = 0;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);
    printf("%d", nombre);
    // Gérer le cas spécial de 0
    if (nombre == 0) {
        compte = 1;
    } else {
        // Gérer les nombres négatifs en travaillant avec leur valeur absolue
        if (nombre < 0) {
            nombre = -nombre;
        }
        while (nombre > 0) {
            nombre /= 10;
            compte++;     
        }
    }

    printf(" contient %d chiffre(s).\n", compte);

    return 0;
}