#include <stdio.h>
#include <stdlib.h>

int main()
{
            /*  Affichage Temp�rature :
        Ecrivez un programme qui demande la temp�rature en Fahrenheit et la transforme en degr� Celsius et affiche la sensation ressentie
        (tr�s froid, froid, chaud, tr�s chaud) La formule :C = (F-32)/1.8*/

    float f;
    float c;
    printf("entrer la temperateur en fahrenheit : \n");
    scanf("%f",&f);
    c = (f - 32) * 5/9 ;

     printf("la  temperateur en degre celsius est %.2f",c);
        if(c < 0 )
            {
            printf("tres froid");
            }
    else if(c >= 0 && c <= 20)
        {
         printf("froid");
        }
    else if (c > 20 && c<= 32)
        {
         printf("chaud");
        }
        else
        {
            printf("tres chaud");
        }

    return 0;

}

