#include <stdio.h>
#include <stdlib.h>

int main()
{
    // �crire un programme C qui lit une s�rie d'entiers positifs inf�rieurs � 100 termin�e par 0.
    // Et qui doit n�gliger toute entr�e strictement sup�rieure � 100.
    // Puis calcule et affiche la somme et le max des �l�ments de cette s�rie.

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
