#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Objectif : Cré (ez une calculatrice en C qui peut effectuer plusieurs opérations mathématiques en utilisant
    // des fonctions distinctes pour chaque opération (addition, soustraction, multiplication, division, carré, racine carrée, etc.)

float func_add (float A, float B);
float func_soustraction (float A , float B);
float func_multip (float A , float B );
float func_division (float A , float B );
float func_carre (float A );
float func_racine (float A);
void func_tableau ();

int main()
{
    int a;
    float A, B,somme,soustraction,carre,multip,division,racine; // variable A et B ce n'ait pas le meme A et b dans les fonction au desseu

    while (1)
    {
    system("cls"); // command for clean console
    printf ("1-Addidtion \n 2-soustraction \n 3-multiplication \n 4-division \n 5-carre \n 6- racine carre \n 7-tableau\n 0-quitte\n");

    printf("veuillier saisir un nombre \n");
    scanf("%d",&a); // le variable a represent le choix de l'operationn .

    if(a == 5 || a== 6)
    {
       printf("\n entrer le nombre A :");
        scanf("%f",&A);
    }
    else if (a == 1 || a== 2 || a== 3 || a== 4)
    {
        printf("\n entrer le nombre A :");
        scanf("%f",&A);
        printf("\n entrer le nombre B :");
        scanf("%f",&B);
    }
    switch (a)
        {
        case 1 :somme = func_add (A,B);printf("%.2f + %.2f = %.2f",A,B,somme);break;
        case 2 : soustraction = func_soustraction(A,B);printf("%.2f - %.2f = %.2f",A,B,soustraction);break;
        case 3 : multip = func_multip(A,B);printf("%.2f * %.2f = %.2f",A,B,multip);break;
        case 4 : division = func_division(A,B);printf("%.2f / %.2f = %.2f",A,B,division);break;
        case 5 : carre = func_carre(A);printf("carre de nombre %.2f est %.2f",A,carre);break;
        case 6 : racine = func_racine(A);printf("racine de nombre %.2f est %.2f",A,racine);break;
        case 7 : func_tableau ();break;
        case 0 : exit(0);
        }
    }
}

float func_add (float A, float B)  // float type de retourne de la fonction
    {
      float somme;
        somme = A + B; // return A + B;
        return somme;
    }

float func_soustraction (float A , float B)
    {
        float soustraction;
        soustraction = A - B ; // return A - B;
        return soustraction;
    }
float func_multip (float A , float B )
    {
        float multi;
        multi = A * B;
        return multi;
    }

 float func_division (float A , float B )
    {
        float div;
        if(B == 0){
            printf ("on peut pas divisi par 0");
            exit(0); // stop runing programme
        }

        div= A / B;
        return div;
    }
 float func_carre (float A )
    {
        float carre = pow(A,2);
        return carre ;
    }
 float func_racine (float A)
     {
         if ( A < 0){
            printf ("On peut pas calcul le racine d'un nombre inferieur à 0");
            exit(0); // stop runing programme
         }
         return sqrt(A);
     }

     void func_tableau ()
     {
         int choix, max = 0, min = 0, somme = 0, N = 5;
         float moyenne;
         printf("saisir la taille de tableau :");
         scanf("%d",&N);

         int tableau [N];

         // for pour l'insertion des donnees
          for (int i=0; i < N; i++)
          {
              printf(" donner la valeur %d :", i+1);
              scanf("%d", &tableau[i]);
          }
          max = tableau [0];
          min = tableau [0];
          // for pour calcul max min somme
          for (int i=0; i < N; i++)
          {
              if(tableau[i]>max) {
                max = tableau[i];
              }
              if(tableau[i]< min) {
                min = tableau[i];
              }
              somme += tableau[i];
          }

          moyenne = somme / N;
          system("cls"); // command for clear console
          printf("1 - Max\n");
          printf("2 - Min\n");
          printf("3 - Moyenne\n");

          printf("veuillier choisir un operation : \n");
          scanf("%d",&choix);

          if (choix == 1)
          {
              printf("le maximum est : %d",max);
          }
          else if (choix == 2)
          {
              printf("le minimum est : %d",min);
          }
          else if (choix == 3)
          {
              printf("le moyenne est :%d",moyenne);
          }

     }
