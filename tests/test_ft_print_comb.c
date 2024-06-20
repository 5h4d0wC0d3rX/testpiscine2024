/* *************************************************************************** #
#                                                                              #
#       _______                ex05/test_ft_print_comb.c                       #
#      |.-----.|                                                               #
#      ||x . x||                 By: fdi-tria <fdi-tria@student.42lausanne.ch> #
#      ||_.-._||                                                               #
#       -------                  Created: 19/06/2024 11:20:00                  #
#     __[=== o]___                                                             #
#    |:::::::::::|\              Updated: 19/06/2024 11:20:00                  #
#     -=========-                                                              #
# ***************************************************************************  #
ChangeLog:
v0.0.1: fdi-tria, 19/06/2024 11:20:00
    - Initial release
# *************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Prototype de la fonction à tester
void ft_print_comb(void);

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

    // Exécuter la fonction à tester
    ft_print_comb();
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
    fprintf(expected, "012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789\n");
    fclose(expected);

    // Comparer les fichiers
    if (compare_files("output.txt", "expected_output.txt")) {
        printf("Test réussi.\n");
    } else {
        printf("Test échoué. La sortie attendue est '012, 013, 014, ..., 789\\n'.\n");
    }

    // Supprimer les fichiers temporaires
    remove("output.txt");
    remove("expected_output.txt");

    return 0;
}

/****************************************************************************
Explication des tests:

main:
- Ce script de test vérifie la fonction ft_print_comb en affichant toutes les combinaisons de trois chiffres différents dans l'ordre croissant.
- Il redirige la sortie standard vers un fichier temporaire pour comparer la sortie réelle à la sortie attendue.
- Si les sorties ne correspondent pas, un message d'erreur est affiché.

Bibliothèque incluse:
- <unistd.h>: Fournit l'accès à l'API de bas niveau du POSIX. La fonction write est définie dans cette bibliothèque.
- <fcntl.h>: Fournit les constantes et déclarations nécessaires pour les opérations de fichier, comme open.
- <stdio.h>: Fournit les fonctions d'entrée/sortie standard telles que fopen, fprintf, etc.
- <string.h>: Fournit des fonctions pour manipuler les chaînes de caractères.
- <stdlib.h>: Fournit des fonctions pour la gestion de la mémoire et des utilitaires généraux.

Commandes de compilation et d'exécution:

1. Compiler uniquement ft_print_comb.c:
gcc -Wall -Wextra -Werror -c ft_print_comb.c -o ft_print_comb.o

2. Compiler ft_print_comb.c et générer un exécutable pour les tests:
gcc -Wall -Wextra -Werror -o test/test_ft_print_comb ft_print_comb.c test/test_ft_print_comb.c

3. Rendre le script exécutable et l'exécuter:
chmod +x run_tests.sh
./run_tests.sh

Contexte:
- Ce fichier est un script de test pour vérifier le bon fonctionnement de la fonction ft_print_comb.
- L'objectif est de s'assurer que ft_print_comb affiche correctement toutes les combinaisons de trois chiffres différents dans l'ordre croissant.

Notes:
- Ce script est optionnel et est utilisé pour vérifier la fonction localement avant la soumission.
- Assurez-vous de compiler et d'exécuter ce script pour valider le comportement de ft_print_comb.

**************************************************************************** */
