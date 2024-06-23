#include <stdio.h>

// Déclaration de la fonction ft_strlen
int ft_strlen(char *str);

int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "";
    char str3[] = "42";
    char str4[] = "This is a longer string to test the function.";
    int length;

    // Test 1
    length = ft_strlen(str1);
    printf("La longueur de la chaîne \"%s\" est : %d\n", str1, length);

    // Test 2
    length = ft_strlen(str2);
    printf("La longueur de la chaîne \"%s\" est : %d\n", str2, length);

    // Test 3
    length = ft_strlen(str3);
    printf("La longueur de la chaîne \"%s\" est : %d\n", str3, length);

    // Test 4
    length = ft_strlen(str4);
    printf("La longueur de la chaîne \"%s\" est : %d\n", str4, length);

    return 0;
}

