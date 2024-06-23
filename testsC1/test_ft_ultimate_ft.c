#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
    int a = 0; // Initialisation de a à 0
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    ft_ultimate_ft(&p8); // Appel de la fonction ft_ultimate_ft
    if (a == 42)
    {
        printf("Test ft_ultimate_ft PASSED: a = %d (Expected: 42)\n", a); // Test réussi
    }
    else
    {
        printf("Test ft_ultimate_ft FAILED: a = %d (Expected: 42)\n", a); // Test échoué
    }
    return 0;
}
