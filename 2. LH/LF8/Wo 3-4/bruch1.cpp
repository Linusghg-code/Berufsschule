
#include <iostream>
using namespace std;

// Funktion: Euklidischer Algorithmus
int euklid(int p, int q)
{
    int r = p % q;

    while (r != 0)
    {
        p = q;
        q = r;
        r = p % q;
    }

    return q;
}

int main()
{
    int zaehler, nenner, ggt;

    // Bruch eingeben
    cout << "Zaehler eingeben: ";
    cin >> zaehler;

    cout << "Nenner eingeben: ";
    cin >> nenner;

    // Groessten gemeinsamen Teiler berechnen
    ggt = euklid(abs(zaehler), abs(nenner));

    // Bruch kuerzen
    zaehler = zaehler / ggt;
    nenner = nenner / ggt;

    // Ergebnis ausgeben
    cout << "Gekuerzter Bruch: "
         << zaehler << "/" << nenner << endl;

    return 0;
}
