#include <stdio.h>

// Déclaration des fonctions
void ft_strlen(char *str, int *p);
void ft_putstr(char *str);

int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "";
    char str3[] = "42";
    int length;

    // Test 1
    ft_strlen(str1, &length);
    printf("La longueur de la chaîne \"%s\" est : %d\n", str1, length);
    printf("Affichage de la chaîne avec ft_putstr : ");
    ft_putstr(str1);
    printf("\n");

    // Test 2
    ft_strlen(str2, &length);
    printf("La longueur de la chaîne \"%s\" est : %d\n", str2, length);
    printf("Affichage de la chaîne avec ft_putstr : ");
    ft_putstr(str2);
    printf("\n");

    // Test 3
    ft_strlen(str3, &length);
    printf("La longueur de la chaîne \"%s\" est : %d\n", str3, length);
    printf("Affichage de la chaîne avec ft_putstr : ");
    ft_putstr(str3);
    printf("\n");

    return 0;
}

