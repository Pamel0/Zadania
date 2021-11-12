#include <stdio.h>

int main(void)
{
  int kod;

  printf("Podaj kod ASCII: \n");
  scanf("%d", &kod); /* pobiera liczbe calkowita z wejscia */
  printf("%c\n", kod); /* wypisuje znak odpowiadajacy pobranej liczbie calkowitej */

  return 0;
}
