#include <stdio.h>
#include <string.h>

int main() {
    char TABCH[5][51];  // tableau de 5 mots d'une longueur maximale de 50 caractères
    char *P1, *P2, temp;
    int i, j, k, len;

    printf("Entrez 5 mots d'une longueur maximale de 50 caractères :\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", TABCH[i]);
    }

    // Inverser l'ordre des caractères à l'intérieur des 5 mots
    for (i = 0; i < 5; i++) {
        len = strlen(TABCH[i]);
        P1 = TABCH[i];
        P2 = TABCH[i] + len - 1;

        for (j = 0; j < len / 2; j++) {
            temp = *P1;
            *P1 = *P2;
            *P2 = temp;

            P1++;
            P2--;
        }
    }

    // Afficher les mots inversés
    printf("Les mots inversés sont :\n");
    for (k = 0; k < 5; k++) {
        printf("%s\n", TABCH[k]);
    }
    return 0;
}