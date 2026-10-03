#include "ft.h"
void to_lower(char *str)
{
    while(*str)
    {
    *str = tolower((unsigned char)*str);
    str++;
    }
}

static void lire_ligne(char *ligne, size_t taille)
{
    int c;
    if (fgets(ligne, taille, stdin) == NULL)
        exit(EXIT_SUCCESS);
    if (strchr(ligne, '\n') == NULL)
        while ((c = getchar()) != '\n' && c != EOF)
            ;
}

void saisir_entier(int *valeur)
{
    char ligne[256];
    char *fin;
    long nombre;
    for (;;)
    {
        lire_ligne(ligne, sizeof(ligne));
        errno = 0;
        nombre = strtol(ligne, &fin, 10);
        if (fin != ligne)
        {
            while (isspace((unsigned char)*fin))
                fin++;
            if (*fin == '\0' && errno == 0 && nombre >= INT_MIN && nombre <= INT_MAX)
            {
                *valeur = (int)nombre;
                return;
            }
        }
        printf("Saisir un entier valide: ");
    }
}

void saisir_prix(float *valeur)
{
    char ligne[256];
    char *fin;
    float nombre;
    for (;;)
    {
        lire_ligne(ligne, sizeof(ligne));
        errno = 0;
        nombre = strtof(ligne, &fin);
        if (fin != ligne)
        {
            while (isspace((unsigned char)*fin))
                fin++;
            if (*fin == '\0' && errno == 0 && isfinite(nombre))
            {
                *valeur = nombre;
                return;
            }
        }
        printf("Saisir un prix valide: ");
    }
}

void saisir_texte(char *texte)
{
    char ligne[256];
    size_t longueur;
    for (;;)
    {
        lire_ligne(ligne, sizeof(ligne));
        longueur = strcspn(ligne, "\r\n");
        if (longueur > 0 && longueur < 50)
        {
            ligne[longueur] = '\0';
            strcpy(texte, ligne);
            return;
        }
        printf("Saisir entre 1 et 49 caracteres: ");
    }
}
