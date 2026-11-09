
#include <iostream>
#include <cstdlib>
using namespace std;

// Funktion zur Berechnung des ggT
int ggt(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while (b != 0)
    {
        int rest = a % b;
        a = b;
        b = rest;
    }

    return a;
}

// Funktion zum Kürzen und Ausgeben eines Bruchs
void ausgabe(int zaehler, int nenner)
{
    // Nenner positiv machen
    if (nenner < 0)
    {
        zaehler = -zaehler;
        nenner = -nenner;
    }

    int teiler = ggt(zaehler, nenner);

    zaehler /= teiler;
    nenner /= teiler;

    if (nenner == 1)
        cout << zaehler;
    else
        cout << zaehler << "/" << nenner;
}

int main()
{
    int z1, n1, z2, n2;

    cout << "Bruchrechnung" << endl;

    cout << "Eingabe Bruch 1 Zaehler: ";
    cin >> z1;

    cout << "Nenner: ";
    cin >> n1;

    cout << "Eingabe Bruch 2 Zaehler: ";
    cin >> z2;

    cout << "Nenner: ";
    cin >> n2;

    // Addition
    int addZ = z1 * n2 + z2 * n1;
    int addN = n1 * n2;

    // Multiplikation
    int mulZ = z1 * z2;
    int mulN = n1 * n2;

    cout << "Addition: ";
    ausgabe(addZ, addN);
    cout << endl;

    cout << "Multiplikation: ";
    ausgabe(mulZ, mulN);
    cout << endl;

    return 0;
}
