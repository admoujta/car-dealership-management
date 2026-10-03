#include "ft.h"

Voiture *modif_anne(Voiture* head,int annee)
{
    int trouve = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        if(tmp ->annee == annee)
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
        printf("L Annee est Introuvable\n");

        return head;
    }
    return head;
}
