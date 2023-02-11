#include <stdio.h>

const int ALPHABET_SIZE = 26;

int main() {
  char ch[100];
  char *pi;
  int tab[ALPHABET_SIZE] = {0};
  int *p2;

  printf("Entrez une ligne de texte (max. 100 caractères) : ");
  scanf("%s", ch);

  for (pi = ch; *pi; pi++) {
    if (isalpha(*pi)) {
      int index = tolower(*pi) - 'a';
      tab[index]++;
    }
  }

  printf("La chaîne \"%s\" contient :\n", ch);
  for (p2 = tab; p2 - tab < ALPHABET_SIZE; p2++) {
    if (*p2 == 1) {
      printf("%d fois la lettre '%c'\n", *p2, 'a' + (p2 - tab));
    }
  }

  return 0;
}