#include <stdio.h>
#include <stdlib.h>

int main()
{
       /*  Nombre entier à trois chiffres en ordre inverse

    Écrivez un programme C pour afficher un nombre entier à trois chiffres dans l'ordre inverse sans utiliser la boucle.
    Par exemple, si le nombre entier est 234, son inverse est 432. */

    int num, numdinv;
     printf("entrer un nombre :");
     scanf("%d",&num);

     numdinv = (num % 10) * 100 + ((num / 10)%10) * 10 + (num/100);

     printf("inverse des nombre %d est %d",num, numdinv);


    return 0;
}
