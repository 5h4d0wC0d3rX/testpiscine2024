#include <stdio.h>

// Déclaration de la fonction ft_rev_int_tab
void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);
    int i;

    // Afficher le tableau avant l'inversion
    printf("Tableau avant l'inversion :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Appel de la fonction ft_rev_int_tab
    ft_rev_int_tab(tab, size);

    // Afficher le tableau après l'inversion
    printf("Tableau après l'inversion :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

