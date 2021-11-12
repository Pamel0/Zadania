#include <stdio.h>

int main(void)
{
  double masa_cz_w=3.0e-23;
  int masa_litr=1000;
  double objetosc;
  double liczba_cz;

  printf("Podaj objetosc wody w litrach:\n");
  scanf("%lf", &objetosc);

  liczba_cz=objetosc*masa_litr/masa_cz_w;

  printf("W podanej objetosci znajduje sie %.2le czasteczek wody.\n", liczba_cz);

  return 0;
}
