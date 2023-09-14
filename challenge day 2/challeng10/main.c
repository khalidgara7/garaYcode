#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ecrire un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format suivant: 15-Septembre-2012.

    char date[10];

    printf("veuillier saisir une date de ce forma DD/MM/YYYY : ");
    scanf("%s",date);

    if (date[3] == '1')
    {
          switch(date[4])
    {
    case '0' : printf("Octobre"); break;
    case '1' : printf("Novembre"); break;
    case '2' : printf("Decembre"); break;
    default : printf("Error sur la date"); break;

    }
    }

    else if(date[10] == '0')
    {
        switch(date[4])
        {
        case '1' : printf("janvier"); break;
        case '2' : printf("fevrier"); break;
        case '3' : printf("mars"); break;
        case '4' : printf("Avril"); break;
        case '5' : printf("mai"); break;
        case '6' : printf("juin"); break;
        case '7' : printf("juillier"); break;
        case '8' : printf("Auot"); break;
        case '9' : printf("Septembre"); break;
        default : ("Error sur la date"); break;
        }

    }
    return 0;
}
