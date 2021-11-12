#include <stdio.h>
#define MAXDL 20

int main(void)
{
  char imie[MAXDL];
  char nazwisko[MAXDL];

  printf("Podaj swoje imie:");
  scanf("%s", imie);
  printf("Teraz nazwisko:");
  scanf("%s", nazwisko);
  printf("Dane podane przez uzytkownika:\n");
  printf("%s, %s\n\n", nazwisko, imie);

  return 0;
}
