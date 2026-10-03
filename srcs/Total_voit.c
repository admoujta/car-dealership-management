#include "ft.h"

int Total_voit(Voiture *head)
{
    int cpt = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        cpt++;
        tmp = tmp->next;
    }
    return cpt;
}
