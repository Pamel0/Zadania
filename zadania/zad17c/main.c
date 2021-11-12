#include <stdio.h>
#include <string.h>

#define MAXDL 20

int main(void)
{
  char imie[MAXDL];
  char nazwisko[MAXDL];

  printf("Prosze podac swoje imie i nazwisko:");
  scanf("%s %s", imie, nazwisko);

  printf("%s %s\n",imie, nazwisko);
  printf("%*d %*d\n", strlen(imie), strlen(imie), strlen(nazwisko),strlen(nazwisko));

  printf("%s %s\n",imie, nazwisko);
  printf("%-*d %-*d\n", strlen(imie), strlen(imie), strlen(nazwisko),strlen(nazwisko));


  return 0;
}
