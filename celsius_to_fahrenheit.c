#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    // Appliquer la formule de conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Afficher le résultat avec une décimale pour plus de précision
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}