#include "ft.h"

Voiture *menu_modifier(Voiture *head)
{
    int choix;
    int annee;
    float prix;
    char texte[50];

    do
    {
        printf("1. Par marque.\n2. Par modele.\n3. Par annee.\n4. Par prix.\n5. Retour.\nChoix: ");
        saisir_entier(&choix);
        switch (choix)
        {
            case 1:
                printf("Marque a modifier: ");
                saisir_texte(texte);
                head = modif_marque(head, texte);
                break;
            case 2:
                printf("Modele a modifier: ");
                saisir_texte(texte);
                head = modif_model(head, texte);
                break;
            case 3:
                printf("Annee a modifier: ");
                saisir_entier(&annee);
                head = modif_anne(head, annee);
                break;
            case 4:
                printf("Prix a modifier: ");
                saisir_prix(&prix);
                head = modif_prix(head, prix);
                break;
            case 5:
                break;
            default:
                printf("Choix incorrect\n");
        }
    } while (choix != 5);
    return head;
}
