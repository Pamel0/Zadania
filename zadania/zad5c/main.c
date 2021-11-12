#include <stdio.h>

void wolaj_a(void); /* deklaracja funkcji nie pobierajacej zadnych argumentow i nie
		       zwracajacej zadnej wartosci */
void wolaj_b(void); /* j.w. */

int main(void)
{
  wolaj_a(); /* wywolanie funkcji */
  wolaj_a();
  wolaj_b();

  return 0;
}


void wolaj_a(void) /* definicja funkcji wolaj_a */
{
  printf("Panie Janie!\n");
}

void wolaj_b(void) /*definicja funkcji wolaj_b */
{
  printf("Rano wstan!\n");
}
