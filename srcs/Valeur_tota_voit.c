#include "ft.h"

float Valeur_tota_voit(Voiture *head)
{
    float somm = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        somm = somm + tmp->prix;
        tmp = tmp ->next;
    }
    return somm;
}
