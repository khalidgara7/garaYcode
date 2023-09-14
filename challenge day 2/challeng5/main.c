#include <stdio.h>
#include <stdlib.h>

int main()
{
           /* Ecrire un programme C piloté par menu pour convertir une année donnée en,

        Mois
        Jours
        Heures
        Minutes
        Secondes Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire).
         1 an = 365 jours 1 mois = 30 jours */

         int annees, mois, jours, heures, minutes, secondes;

         printf("entrer un nombre d'annee :");
         scanf("%d",&annees);

         mois = 12 * annees;
         jours = 365 * annees;
         heures = 24 * jours * annees;
         minutes = 60 * heures * annees;
         secondes = 60 * minutes * annees;

         printf(" la convertir de %d annees est :\n %d mois \n %d jours \n %d heures \n %d minutes \n %d secondes",annees, mois, jours, heures, minutes, secondes);
    return 0;
}
