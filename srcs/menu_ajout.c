#include "ft.h"
Voiture* menu_ajout(Voiture *head)
{
    char model[50];
    int choix;
    do
    {
        printf("\t\t1. Ajout au debut.\n");
        printf("\t\t2. Ajout a la fin.\n");
        printf("\t\t3. Ajout apres une voiture specifique dans le stock.\n");
        printf("\t\t4. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        saisir_entier(&choix);
        switch(choix)
        {
            case 1:

                head = Ajout_debut(head);

                printf("AJOUT AVEC SUCCEE!!\n");


                break;
            case 2:

                head = ajout_fin(head);


                break;
            case 3:

                printf("Saisr le model a chercher: ");
                saisir_texte(model);
                head = ajout_apre_voiture(head,model);


                break;
            case 4:

                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 4);
    return head;
}
