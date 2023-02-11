#include <stdio.h>

int main() {
  int x, a[100], n, i, j;
  int *pi, *pj;

  printf("Entrez un entier X : ");
  scanf("%d", &x);

  printf("Entrez la taille du tableau A : ");
  scanf("%d", &n);

  printf("Entrez les éléments du tableau A :\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  pi = a;
  pj = a;
  for (i = 0; i < n; i++) {
    if (*pi != x) {
      *pj = *pi;
      pj++;
    }
    pi++;
  }

  n = pj - a;

  printf("Tableau A après suppression de X :\n");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}