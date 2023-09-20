#include <stdio.h>
#include <stdlib.h>


void func_menu();
void Ajouter();
void Ajouter_tache( ajout_tache );
void Ajouter_pleusier_tache();
void retour();

int main()
{
    func_menu();
    return 0;
}


            // --------------- stractures--------------


            typedef struct  {
                int id_unique,deadline;
                char titre[20];
                char description[50];
                char statut[30];

            }ajout_tache;

            typedef struct {
                int day;
                int heures;
                int minutes;



            }deadline;

//  ----------- functions-------------

    void func_menu(){
        int number ;
    do{
        printf("1-Ajouter un tache \n2-Ajouter pleusieur taches\n");
        printf("3-Affichier laliste de toutes tache \n4-Modifier un tache\n");
        printf("5-Supprimer une tache \n6-recherche des taches \n7-les statistique");

        printf("\n\n *_veuilliez choisir une operation sur la liste :");
        scanf("%d",&number);

      }

        while(number > 0 || number < 8);
                switch(number){
                case 1 : Ajouter();
                    break;
                }

            }


    void Ajouter(){

        int a;
        do{
        printf(" ajouter une tache :");
        printf("ajouter pleusieur taches :");
        scanf("%d",&a);

        }while(a <0 || a >= 2 );
        switch(a)
        {
            case 1 :
                 Ajouter_tache();
            break;
            case 2 :
                 Ajouter_pleusier_tache();
            break;
        }

    }

    void Ajouter_tache()
    {
        int tache;
        ajout_tache ajout;
                do
                {
                    printf("\n entrer id de tache :");
                    scanf("%d",&ajout.id_unique);

                    printf("\n entrer la titre de tache : \n");
                    scanf("%d",&ajout.titre);

                    printf("\n entrer la description de tache : \n");
                    scanf("%d",&ajout.description);

                    printf("\n entrer la deadline de tache : \n");
                    scanf("%d",&ajout.deadline);

                    printf("\n entrer la status de tache : \n");
                    scanf("%d",&ajout.statut);
                }while(tache );

    }

    void Ajouter_pleusier_tache()
        {
            int PA;
            printf("ajouter pleusieurs taches ?");
            scanf("%d", &PA);
         while(PA--)
            Ajouter_tache();

        }


        void retour ()
        {
        int R;
        do {
            printf("\n\n \t\t Pour Retour au menu principal appuyez sur 1 \n");
            printf("\t\t Pour Quittez le programme appuyez sur 2 \n");
            scanf("%d", &R);
        }while(R <=1 && R > 2 );

            switch (R)
            {

                case 1:
                    func_menu();
                    break;

                case 2:
                    printf(" quitter !!");
                    break;

            }

        }



