#include <stdio.h>

int main() {
    int nombre;
    int nombreInverse = 0;
    int reste;

    scanf("%d", &nombre);

    if (nombre == 0) {
        nombreInverse = 0; // Le nombre inversé de 0 est 0
    } else {
        while (nombre != 0) {
            reste = nombre % 10;          // Extrait le dernier chiffre
            nombreInverse = nombreInverse * 10 + reste; // Construit le nombre inversé
            nombre /= 10;                 // Supprime le dernier chiffre du nombre original
        }
    }

    printf("Nombre inversé : %d\n", nombreInverse);

    return 0;
}