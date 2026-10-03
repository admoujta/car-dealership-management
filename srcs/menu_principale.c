#include "ft.h"

void menu_principale()
{
    int choix;
    do
    {
        printf("\t\t\tMenu Principal:\n\n");
        printf("\t\t1-->Gestion d'un Concessionnaire de Voitures.\n");
        printf("\t\t2-->Quitter\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        saisir_entier(&choix);
        switch(choix)
        {
            case 1:

                Gestion();
                break;
            case 2:

                printf("A Bientot\n");
                exit(0);
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 2);
}
