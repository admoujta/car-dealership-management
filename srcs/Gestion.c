#include "ft.h"

void Gestion()
{
    Voiture *head = NULL;
    int choix;
    do
    {
        printf("\t\t\tGestion d un Concessionnaire de Voitures:\n\n");
        printf("\t\t1-->Ajout d une voiture au stock.\n");
        printf("\t\t2-->Modification d une voiture au stock.\n");
        printf("\t\t3-->Suppression d une voiture au stock.\n");
        printf("\t\t4-->Recherche d une voiture au stock.\n");
        printf("\t\t5-->Affichage des voitures disponibles dans le stock.\n");
        printf("\t\t6-->Fonctionnalite Sur Fichier\n");
        printf("\t\t7-->Trie.\n");
        printf("\t\t8-->Statistiques sur le stock.\n");
        printf("\t\t9-->MENU principal.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        saisir_entier(&choix);
        switch(choix)
        {
            case 1:

                head = menu_ajout(head);

                break;
            case 2:

                head = menu_modifier(head);
                break;
            case 3:

                head = menu_sup(head);

                break;
            case 4:

                head = menu_recherche(head);
                break;
            case 5:

                affiche(head);


                break;
            case 6:

                menu_Fichier(&head);
                break;
            case 7:

                head = menu_trie(head);
            break;
            case 8:

                head = menu_statistique(head);
            break;
            case 9:

            while (head != NULL)
            {
                Voiture *suivant = head->next;
                free(head);
                head = suivant;
            }
            return;
            default:

                printf("Choix Incorrect\n");
        }
    } while(choix != 9);
}
