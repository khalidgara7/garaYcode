#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  Ecrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul.
    Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro,
    alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal à zéro. */

    float nombre;

    printf("veuilliez saisir un nombre  : ");
    scanf("%f",&nombre);

    if (nombre < 0)
        printf("le nombre %.2f est : negatif",nombre);
    else if (nombre > 0)
        printf("le nombre %.2f est : positif",nombre);
    else
        printf("le nombre %.2f est : null");
    return 0;
}
