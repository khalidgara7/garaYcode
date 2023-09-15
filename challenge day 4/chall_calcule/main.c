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

int main()
{

    float a,A,B,somme,soustraction,carre,multip,division;
    printf("veuillier saisir un nombre \n");
    printf ("1-Addidtion \n 2-soustraction \n 3-multiplication \n 4-division \n 5-carre \n 6- racine carre \n Quitter\n");
    scanf("%f",&a);
    scanf("%f",&A);
    scanf("%f",&B);

    switch (a)
    {
    case 1 :somme = func_add (A,B);printf("l'addition de deux nombre %.2f et %.2f est %.2f",A,B,somme);break;
    case 2 : func_soustraction(A, B);printf("la soustraction de deux nombre %.2f et %.2f est %.2f",A,B,soustraction);break;
    case 3 : func_multip(A,B);printf("multiplication de deux nombre %.2f et %.2f est %.2f",A,B,multip);break;
    case 4 : func_division(A,B);printf("la divsion de deux nombre %.2f et %.2f est %.2f",A,B,division);break;
    case 5 : func_carre(A);printf("carre de nombre %.2f est %.2f",A,B,carre);break;
   // case 6 : func_racine(A);printf("carre de nombre %.2f est %.2f",A,B,carre);break;

    }
}

float func_add (float A, float B)
    {
      float somme;
        somme = A + B;
        return somme;
    }

float func_soustraction (float A , float B)
    {
        float soustraction;
        soustraction = A - B ;
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
         return sqrt(A);
     }
