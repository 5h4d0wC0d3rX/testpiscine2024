#include <stdio.h>

// Déclaration de la fonction ft_sort_int_tab
void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(tab) / sizeof(tab[0]);
    int i;

    // Afficher le tableau avant le tri
    printf("Tableau avant le tri :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Appel de la fonction ft_sort_int_tab
    ft_sort_int_tab(tab, size);

    // Afficher le tableau après le tri
    printf("Tableau après le tri :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

