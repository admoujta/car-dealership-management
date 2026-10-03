#include  "ft.h"
Voiture *creation_noeud()
{
    Voiture *nv = (Voiture*)malloc(sizeof( Voiture));
    if(nv != NULL)
    {
        printf("saisir la Marque: ");
        saisir_texte(nv->marque);
        printf("saisir le Modele: ");
        saisir_texte(nv->modele);
        do{
        printf("saisir annee: ");
        saisir_entier(&nv->annee);
        }while(nv->annee <=0);
        do{
        printf("saisir le Prix:");
        saisir_prix(&nv->prix);
        }while(nv->prix <0);

        nv -> next = NULL;
    }
    return nv;
}
