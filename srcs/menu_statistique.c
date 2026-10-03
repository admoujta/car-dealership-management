#include "ft.h"

Voiture* menu_statistique(Voiture *head)
{
     int choix;
    do
    {
        printf("\t\t1. Total Voiture.\n");
        printf("\t\t2. Valeur total.\n");
        printf("\t\t3. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        saisir_entier(&choix);
        switch(choix)
        {
        case 1:

                printf("Nombre de voiture disponible: %d\n",Total_voit(head));


                break;
            case 2:

                printf("La valeur Total : %.2f$\n",Valeur_tota_voit(head));


                break;
            case 3:

                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 3);
    return head;
}
