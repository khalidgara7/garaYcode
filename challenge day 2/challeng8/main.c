#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Nous d�sirons afficher la mention obtenue par un �l�ve en fonction de la moyenne de ses notes.
    S�il a une moyenne strictement inf�rieure a 10, il est recal�. S�il a une moyenne entre 10 (inclus)
    et 12, il obtient la mention passable. S�il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien.
    S�il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien.
    S�il a une moyenne sup�rieure a 16 (inclus) il obtient la mention tr�s bien. Ecrire les instructions n�cessaires. */

    float moyenne;
     printf("vieullier saisir une note : ");
     scanf("%f",&moyenne);

     if(moyenne < 10)
        printf("recale");
        else if (moyenne >= 10 && moyenne < 12)
            printf("inclus");
        else if(moyenne >= 12 && moyenne< 14)
            printf("assez bien");
        else if(moyenne >= 14 && moyenne< 16)
            printf("bien");
            else
                printf("tres bien");
    return 0;
}
