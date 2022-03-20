#include <iostream>

using namespace std;

int main()

{
    char znak;
    int l1, l2;
    cout << "Podaj znak, liczbe oraz liczbe 2: ";
    cin >> znak >> l1 >> l2;
    for (int i = 0; i < l2; i++)
    {
        for (int j = 0; j < l1; j++)
        {
            cout << znak << " ";
        }
        cout << endl;
    }
    return 0;
}
