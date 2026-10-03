#include "ft.h"

Voiture *menu_recherche(Voiture *head)
{
    char marque[50];
    char model[50];
    int annee = 0;
    float prix = 0;
     int choix;
    do
    {
        printf("\t\t1. Par marque.\n");
        printf("\t\t2. Par modele.\n");
        printf("\t\t3. Par annee.\n");
        printf("\t\t4. Par prix.\n");
        printf("\t\t5. Recherche avancee .\n");
        printf("\t\t6. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        saisir_entier(&choix);
        switch(choix)
        {
            case 1:

                printf("Saisi la marque A recherche: ");
                saisir_texte(marque);

                Recherche_marque(head,marque);


                break;
            case 2:

                printf("Saisi le modele A rechercher: ");
                saisir_texte(model);

                Recherche_model(head,model);


                break;
            case 3:

                printf("Saisir l annee A rechercher: ");
                saisir_entier(&annee);

                Recherche_annee(head,annee);


                break;
            case 4:

                printf("Saisir le prix A recherche: ");
                saisir_prix(&prix);

                Recherche_prix(head,prix);


                break;
            case 5:

                printf("Saisi la marque A recherche (ou '-' pour ignorer): ");
                saisir_texte(marque);
                printf("Saisi le modele A rechercher(ou '-' pour ignorer): ");
                saisir_texte(model);
                printf("Saisir l annee A recherche(ou -1 pour ignorer): ");
                saisir_entier(&annee);
                printf("Saisir le prix A recherche(ou -1 pour ignorer): ");
                saisir_prix(&prix);

                Recherche_avance(head,marque,model,annee,prix);


                break;
            case 6:

                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 6);
    return head;
}
