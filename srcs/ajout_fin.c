#include "ft.h"
Voiture *ajout_fin(Voiture *head)
{
    Voiture *tmp = head;
    Voiture *nv = creation_noeud();
    if (nv == NULL)
        return head;
    if(head == NULL)
    {
        return nv;
    }
    while(tmp -> next != NULL)
    {
        tmp = tmp->next;
    }
    tmp ->next = nv;

    printf("AJOUT AVEC SUCCEE !!!!!!\n");

    return head;
}
