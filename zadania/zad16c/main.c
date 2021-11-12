#include <stdio.h>

int main(void)
{
  char imie[20];
  int wzrost;

  printf("Podaj swoj wzrost (w cm):");
  scanf("%d", &wzrost);
  printf("Teraz podaj swoje imie:");
  scanf("%s", imie);
  printf("%s, masz %.2f metra wzrostu.\n", imie, wzrost/100.0);

  return 0;
}
