#include "ft.h"

Voiture *menu_sup(Voiture *head)
{
    char model[50];
    int choix;
    do
    {
        printf("\t\t1.Suppression au debut.\n");
        printf("\t\t2. Suppression a  la fin.\n");
        printf("\t\t3. Suppression apres une voiture specifique.\n");
        printf("\t\t4. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        saisir_entier(&choix);
        switch(choix)
        {
            case 1:

            head = sup_debut(head);


                break;
            case 2:

                head = sup_fin(head);


                break;
            case 3:

                printf("Saisir le model Pour Suprimer: ");
                saisir_texte(model);
                head = sup_voit(head,model);


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
