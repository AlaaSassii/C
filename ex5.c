#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void strepy(char *s, char c) {
  int i, j;
  for (i = 0, j = 0; s[i]; i++) {
    if (s[i] != c) {
      s[j++] = s[i];
    }
  }
  s[j] = '\0';
}

int main() {
  char ch1[100], ch2[100];
  char *p1, *p2;
  bool trouve;

  printf("Entrez la première chaîne CH1 : ");
  scanf("%s", ch1);

  printf("Entrez la seconde chaîne CH2 : ");
  scanf("%s", ch2);

  for (p1 = ch1; *p1; p1++) {
    trouve = false;
    for (p2 = ch2; *p2; p2++) {
      if (*p1 == *p2) {
        trouve = true;
        break;
      }
    }

    if (trouve) {
      strepy(ch1, *p1);
      p1 = ch1 - 1;
    }
  }

  printf("Première chaîne après suppression : %s\n", ch1);

  return 0;
}