#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[20], adres[50];
    int numerdom;
    printf("Wpisz imie: ");
    scanf("%s", imie);
    printf("Wpisz adres: ");
    scanf("%s", adres);
    printf("Wpisz numer domu: ");
    scanf("%d", &numerdom);
    printf("%s %s %d\n", imie, adres, numerdom );
    return 0;
}
