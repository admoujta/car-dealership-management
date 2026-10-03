#include "ft.h"
Voiture *modif_prix(Voiture* head,float prix)
{
    int trouve = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        if(tmp ->prix == prix)
        {
            printf("saisr la nouvelle marque: ");
            saisir_texte(tmp->marque);
            printf("saisr le nouveau model: ");
            saisir_texte(tmp->modele);
            printf("saisr la nouvelle annee: ");
            do { saisir_entier(&tmp->annee); } while (tmp->annee <= 0);
            printf("saisr la nouvelle prix: ");
            do { saisir_prix(&tmp->prix); } while (tmp->prix < 0);
             trouve = 1;

             printf("Modification avec Succes!!!!\n");

            break;
        }
        tmp=tmp ->next;
    }
    if(trouve == 0)
    {
        printf("Le prix est Introuvable\n");

        return head;
    }
    return head;
}
