#include <stdio.h>

int main() {
  int a[100], n, i, j, aide;
  int *pi, *pj;

  printf("Entrez la taille du tableau A : ");
  scanf("%d", &n);

  printf("Entrez les éléments du tableau A :\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  pi = a;
  pj = a + n - 1;
  while (pi < pj) {
    aide = *pi;
    *pi = *pj;
    *pj = aide;

    pi++;
    pj--;
  }

  printf("Tableau A rangé dans l'ordre inverse :\n");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}