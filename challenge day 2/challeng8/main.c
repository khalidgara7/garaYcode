#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses notes.
    S’il a une moyenne strictement inférieure a 10, il est recalé. S’il a une moyenne entre 10 (inclus)
    et 12, il obtient la mention passable. S’il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien.
    S’il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien.
    S’il a une moyenne supérieure a 16 (inclus) il obtient la mention très bien. Ecrire les instructions nécessaires. */

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
