#include "ft.h"
void menu_Fichier(Voiture **head)
{
    int choix;
    do
    {
        printf("\t\t1. la sauvegarde  des donnes .\n");
        printf("\t\t2. le chargement des donnes.\n");
        printf("\t\t3. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        saisir_entier(&choix);
        switch(choix)
        {
        case 1:


                sauv_fichier("voiture.txt",*head);


                break;
            case 2:

                *head = charger_fichier("voiture.txt", *head);


                break;
            case 3:

                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 3);
}
