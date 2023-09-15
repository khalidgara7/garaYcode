#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Écrire un programme C qui lit une série d'entiers positifs inférieurs à 100 terminée par 0.
    // Et qui doit négliger toute entrée strictement supérieure à 100.
    // Puis calcule et affiche la somme et le max des éléments de cette série.

    int A, M, nbr;
    A = 0; M = 0; nbr = 0;

    printf("entrer un nmbr :");
    scanf("%d",&nbr);
      while(nbr != 0)
      {
          do{scanf("%d"&nbr);
          if(nmb >100)
            printf("entrer un serie \n")};

      while (nmb>100)
        A += nbr ;
      if(nbr>M)
        M = nbr;
      }
      printf("la somme de l'element de cette serie est %d",A);
      printf("le max de l'element de cette serie est %d",M);




    return 0;
}
