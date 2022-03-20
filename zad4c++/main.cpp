#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include <cmath>

using namespace std;

double harmoniczna( int * tab, int m )
{
    double wynik = 0;
    int i;
    for( i = 0; i < m; i++ )
    {
        wynik +=( 1.0 ) / tab[ i ];
    }
    wynik =( double )( m ) * pow( wynik, - 1.0 );
    return wynik;
}

int main()
{
    int n;
    int * tablica;
    cout << " Program obliczna srednia harmoniczna dowolnej ilosci liczb." << endl;
    cout << " Podaj ile chcesz obliczyc liczb: ";
    cin >> n;

    tablica = new int[ n ];

    for( int i = 0; i < n; i++ )
    {
        cout << i + 1 << " liczba to: ";
        cin >> tablica[ i ];

    }

    double funkcja = harmoniczna( tablica, n );
    cout << " Srednia harmoniczna wynosi: " << funkcja << endl;
    delete[] tablica;
    system( "pause" );
    return 0;
}
