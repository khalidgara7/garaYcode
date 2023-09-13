#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /* Ecrivez un programme C pour trouver la distance entre deux points donnés.
    La formule de distance est dérivée du théorème de Pythagore.
    Pour trouver la distance entre deux points (x1, y1) et (x2, y2), il suffit d'utiliser
    les coordonnées de ces paires ordonnées et d'appliquer la formule.
    Formule de distance Supposons que nous ayons deux points M et N,
    dont les coordonnées sont respectivement (x1, y1) et (x2, y2).
    Leur distance peut être représentée par MN et peut être calculée selon la formule ci-dessous,
    Le premier point (M):- (x1, y1) Deuxième point (N) : (x2, y2) Distance (MN):- √((x2-x1)² + (y2-y1)²)
    Exemple:- M = (4, 8) N = (12, 14) Alors la distance entre M et N est MN = √((12-4)² + (14-8)²) = √(64 + 36) = √(100) = 10 */

    float ab, x1, x2, y1, y2;


    printf("entrer premier coordonnees ");
    scanf("%f",&x1);
    printf("entrer deuxieme coordonnees ");
    scanf("%f",&x2);

    printf("entrer premier coordonnees ");
    scanf("%f",&y1);
    printf("entrer deuxieme coordonnees ");
    scanf("%f",&y2);

    ab = sqrt((pow(x2 - x1),2) + (pow((y2 - y1),2)));

    printf("la distance entre deux point est %f",ab);
    return 0;
}
