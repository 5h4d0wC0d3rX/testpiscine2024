#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
    int a = 1; // Initialisation de a à 1
    int b = 2; // Initialisation de b à 2
    printf("Before ft_swap: a = %d, b = %d\n", a, b); // Affichage des valeurs avant l'appel de ft_swap
    ft_swap(&a, &b); // Appel de la fonction ft_swap
    if (a == 2 && b == 1)
    {
        printf("Test ft_swap PASSED: a = %d, b = %d (Expected: a = 2, b = 1)\n", a, b); // Test réussi
    }
    else
    {
        printf("Test ft_swap FAILED: a = %d, b = %d (Expected: a = 2, b = 1)\n", a, b); // Test échoué
    }
    return 0;
}
