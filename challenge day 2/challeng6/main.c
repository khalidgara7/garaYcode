#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  Ecrivez un programme pour v�rifier si le nombre donn� est positif, n�gatif ou nul.
    Si le nombre est inf�rieur � z�ro, alors le nombre est n�gatif et si le nombre est sup�rieur � z�ro,
    alors le nombre est positif. Si les deux conditions sont fausses, le nombre est �gal � z�ro. */

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
