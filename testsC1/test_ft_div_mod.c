#include <stdio.h>

// Déclaration de la fonction ft_div_mod
void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a = 42;
    int b = 5;
    int div;
    int mod;

    // Appel de la fonction ft_div_mod
    ft_div_mod(a, b, &div, &mod);

    // Afficher les résultats
    printf("Pour a = %d et b = %d:\n", a, b);
    printf("Division (div) = %d\n", div);
    printf("Modulo (mod) = %d\n", mod);

    return 0;
}

