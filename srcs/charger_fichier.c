#include "ft.h"

Voiture *charger_fichier(char *fichier, Voiture *head)
{
    FILE *file = fopen(fichier, "r");
    Voiture *liste = NULL;
    Voiture **fin = &liste;
    char ligne[256];
    Voiture voiture;

    if (file == NULL)
    {
        printf("Impossible d'ouvrir le fichier pour charger.\n");
        return head;
    }
    while (fgets(ligne, sizeof(ligne), file) != NULL)
    {
        if (ligne[0] == '\n' || ligne[0] == '\r' || ligne[0] == '-')
            continue;
        if (sscanf(ligne, "La marque: %49[^\r\n]", voiture.marque) != 1
            || fgets(ligne, sizeof(ligne), file) == NULL
            || sscanf(ligne, "Le model: %49[^\r\n]", voiture.modele) != 1
            || fgets(ligne, sizeof(ligne), file) == NULL
            || sscanf(ligne, "Annee: %d", &voiture.annee) != 1
            || fgets(ligne, sizeof(ligne), file) == NULL
            || sscanf(ligne, "Prix: %f", &voiture.prix) != 1
            || voiture.annee <= 0 || voiture.prix < 0 || !isfinite(voiture.prix))
            goto erreur;
        *fin = malloc(sizeof(Voiture));
        if (*fin == NULL)
            goto erreur;
        **fin = voiture;
        (*fin)->next = NULL;
        fin = &(*fin)->next;
    }
    if (ferror(file))
        goto erreur;
    fclose(file);
    while (head != NULL)
    {
        Voiture *suivant = head->next;
        free(head);
        head = suivant;
    }
    printf("Donnees chargees avec succes.\n");
    return liste;
erreur:
    fclose(file);
    while (liste != NULL)
    {
        Voiture *suivant = liste->next;
        free(liste);
        liste = suivant;
    }
    printf("Chargement impossible: fichier invalide ou memoire insuffisante.\n");
    return head;
}
