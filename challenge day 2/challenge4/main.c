#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Écrivez un programme C qui permet de calculer les solutions possible d’une équation 2ème degré.

    float a, b, c, delta, x, x1, x2;

    printf("veuilliez entrer la valeur de a et b et c ");
    scanf("%f %f %f",&a,&b,&c);


    delta = pow(b, 2) - (4 * a * c);
    if (delta < 0)
        printf("pas de soulution");
    else if(delta == 0)
    {
       x = (-b) / 2 * a;
        printf("l'equoition accepte une seul solutuion : %f",x);
    }

    else
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("equoition accepte deux solution  \n soulutuion 1 est %f \n solution 2 est : %f",x1,x2);
        }
    return 0;
}
