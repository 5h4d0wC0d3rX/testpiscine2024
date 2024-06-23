#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
    int a = 0; // Initialisation de a à 0
    ft_ft(&a); // Appel de la fonction ft_ft
    if (a == 42)
    {
        printf("Test ft_ft PASSED: a = %d (Expected: 42)\n", a); // Test réussi
    }
    else
    {
        printf("Test ft_ft FAILED: a = %d (Expected: 42)\n", a); // Test échoué
    }
    return 0;
}
