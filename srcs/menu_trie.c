#include "ft.h"

Voiture* menu_trie(Voiture *head)
{
     int choix;
    do
    {
        printf("\t\t1. Par marque.\n");
        printf("\t\t2. Par modele.\n");
        printf("\t\t3. Par annee.\n");
        printf("\t\t4. Par prix.\n");
        printf("\t\t5. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        saisir_entier(&choix);
        switch(choix)
        {
            case 1:

                head = trie_marque(head);


                break;
            case 2:

                head = trie_model(head);


                break;
            case 3:

                head = trie_annee(head);


                break;
            case 4:

                head = trie_prix(head);


                break;
            case 5:

                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 5);
    return head;
}
