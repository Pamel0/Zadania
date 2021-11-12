#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char imie[20], nazwisko[20];
    scanf("%s", imie);
    scanf("%s", nazwisko);
    printf("%s %s\n", imie, nazwisko);
    printf("%s\n", imie);
    printf("%s\n", nazwisko);
    printf("%s ", imie);printf("%s\n", nazwisko);
    return 0;
}
