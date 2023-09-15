#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Écrivez un programme pour trouver la circonférence d'un cercle. Prenez le rayon du cercle en entrée de l'utilisateur.
    La formule pour, la circonférence du cercle = 2πr ; où r est le rayon. */

    int R;
    float circon_cercle;
    const float  p = 3.14;

    printf("entrer le rayon de cercle : \n");
    scanf("%d",&R);

    circon_cercle = 2 * p * R;

    printf("la circonference du cercle est : %.2f",circon_cercle);

    return 0;
}
