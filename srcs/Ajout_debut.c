#include "ft.h"
Voiture *Ajout_debut(Voiture *head)
{
    Voiture *nv = creation_noeud();
    if (nv == NULL)
        return head;
    if(head == NULL)
    {
        head = nv;
        return head;
    }
    nv  ->next= head;
    head = nv;
        return head;
}
