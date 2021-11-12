#include <stdio.h>
#include <string.h>

#define IMIE_DL 20

int main(void)
{
  char imie[IMIE_DL];

  printf("Podaj swoje imie:");
  scanf("%s", imie);

  printf("\"%s\"\n", imie);
  printf("\"%20s\"\n", imie);
  printf("\"%-20s\"\n", imie);
  printf("%*s\n",strlen(imie)+3, imie);

  return 0;
}
