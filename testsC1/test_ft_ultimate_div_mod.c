#include <stdio.h>

// Déclaration de la fonction ft_ultimate_div_mod
void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a = 42;
    int b = 5;

    // Afficher les valeurs avant l'appel de la fonction
    printf("Avant :\n");
    printf("a = %d, b = %d\n", a, b);

    // Appel de la fonction ft_ultimate_div_mod
    ft_ultimate_div_mod(&a, &b);

    // Afficher les valeurs après l'appel de la fonction
    printf("Après :\n");
    printf("a = %d (quotient)\n", a);
    printf("b = %d (reste)\n", b);

    return 0;
}

