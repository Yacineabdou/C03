#include <stdio.h>

// Le fonction pricipal, c'est ici que débutera notre programme
int main ()
{
    // Ici le type de variable et le scanf qui récupère la saisi de l'utilisateur
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    // Notre struture conditionelle qui vérifie trois cas ici nottament les saisis de l'utilisateur
    if(x > y && x > z)
    {
        printf("Le plus grand nombre est : %d\n", x);
    }
    else if (y > x && y > z)
    {
        printf("Le plus grand nombre est : %d\n", y);
    }
    else
    {
        printf("Le plus grand nombre est : %d\n", z);
    }
    

    return 0;
}