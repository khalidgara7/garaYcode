#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*  Calcule et affichage résultat en format décimal a et b sont deux entiers saisies au clavier,
   calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant l’interface homme/machine.
   (a/b donne le quotient de la division, a%b donne le reste de la division) */

   int a, b, somme, Subtraction, multiplication, division, qoution;

   printf("entrer le nombre a  :");
   scanf("%d",&a);
   printf("entrer le nombre b  :");
   scanf("%d",&b);
    somme = a + b;
    Subtraction = a - b;
    multiplication = a * b;
    division = a / b;
    qoution = a%b;
     printf("a + b = %d \n",somme);
     printf("a - b = %d \n",Subtraction);
     printf("a * b = %d \n",multiplication);
     printf("a / b = %d \n",division);
     printf("a%b = %d \n",qoution);
    return 0;
}
