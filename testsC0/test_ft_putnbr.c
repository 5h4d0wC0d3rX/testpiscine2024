/* *************************************************************************** #
#                                                                              #
#       _______                ex07/test_ft_putnbr.c                           #
#      |.-----.|                                                               #
#      ||x . x||                 By: fdi-tria <fdi-tria@student.42lausanne.ch> #
#      ||_.-._||                                                               #
#       -------                  Created: 19/06/2024 12:40:00                  #
#     __[=== o]___                                                             #
#    |:::::::::::|\              Updated: 19/06/2024 12:40:00                  #
#     -=========-                                                              #
# ***************************************************************************  #
ChangeLog:
v0.0.1: fdi-tria, 19/06/2024 12:40:00
    - Initial release
# *************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Prototype de la fonction à tester
void ft_putnbr(int nb);

// Fonction pour comparer le contenu de deux fichiers
int compare_files(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");

    if (!f1 || !f2) {
        if (f1) fclose(f1);
        if (f2) fclose(f2);
        return 0; // Erreur d'ouverture des fichiers
    }

    int result = 1;
    char c1, c2;
    while (((c1 = fgetc(f1)) != EOF) && ((c2 = fgetc(f2)) != EOF)) {
        if (c1 != c2) {
            result = 0; // Les fichiers sont différents
            break;
        }
    }

    if (fgetc(f1) != EOF || fgetc(f2) != EOF) {
        result = 0; // Les fichiers ont des tailles différentes
    }

    fclose(f1);
    fclose(f2);
    return result;
}

int main() {
    int fd = open("output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    // Sauvegarder l'ancienne sortie standard
    int old_stdout = dup(1);
    // Rediriger la sortie standard vers le fichier output.txt
    dup2(fd, 1);

    // Exécuter la fonction à tester avec différents cas
    ft_putnbr(42);
    write(1, "\n", 1); // Nouvelle ligne pour la lisibilité
    ft_putnbr(-2147483648);
    write(1, "\n", 1); // Nouvelle ligne pour la lisibilité
    ft_putnbr(0);
    write(1, "\n", 1); // Nouvelle ligne pour la lisibilité
    ft_putnbr(2147483647);
    write(1, "\n", 1); // Nouvelle ligne pour la lisibilité

    // Restaurer la sortie standard
    dup2(old_stdout, 1);
    close(fd);
    close(old_stdout);

    // Créer le fichier attendu pour le test
    FILE *expected = fopen("expected_output.txt", "w");
    if (!expected) {
        perror("fopen");
        return 1;
    }
    fprintf(expected, "42\n-2147483648\n0\n2147483647\n");
    fclose(expected);

    // Comparer les fichiers
    if (compare_files("output.txt", "expected_output.txt")) {
        printf("Test réussi.\n");
    } else {
        printf("Test échoué. La sortie attendue est '42\\n-2147483648\\n0\\n2147483647\\n'.\n");
    }

    // Supprimer les fichiers temporaires
    remove("output.txt");
    remove("expected_output.txt");

    return 0;
}

/****************************************************************************
Explication des tests:

main:
- Ce script de test vérifie la fonction ft_putnbr avec plusieurs cas de test.
- Il redirige la sortie standard vers un fichier temporaire pour comparer la sortie réelle à la sortie attendue.
- Si les sorties ne correspondent pas, un message d'erreur est affiché.

Bibliothèque incluse:
- <unistd.h>: Fournit l'accès à l'API de bas niveau du POSIX. La fonction write est définie dans cette bibliothèque.
- <fcntl.h>: Fournit les constantes et déclarations nécessaires pour les opérations de fichier, comme open.
- <stdio.h>: Fournit les fonctions d'entrée/sortie standard telles que fopen, fprintf, etc.
- <string.h>: Fournit des fonctions pour manipuler les chaînes de caractères.
- <stdlib.h>: Fournit des fonctions pour la gestion de la mémoire et des utilitaires généraux.

Commandes de compilation et d'exécution:

1. Compiler uniquement ft_putnbr.c:
gcc -Wall -Wextra -Werror -c ft_putnbr.c -o ft_putnbr.o

2. Compiler ft_putnbr.c et générer un exécutable pour les tests:
gcc -Wall -Wextra -Werror -o test/test_ft_putnbr ft_putnbr.c test/test_ft_putnbr.c

3. Rendre le script exécutable et l'exécuter:
chmod +x run_tests.sh
./run_tests.sh

Contexte:
- Ce fichier est un script de test pour vérifier le bon fonctionnement de la fonction ft_putnbr.
- L'objectif est de s'assurer que ft_putnbr affiche correctement un nombre passé en paramètre.

Notes:
- Ce script est optionnel et est utilisé pour vérifier la fonction localement avant la soumission.
- Assurez-vous de compiler et d'exécuter ce script pour valider le comportement de ft_putnbr.

**************************************************************************** */
