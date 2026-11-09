#include <iostream>
using namespace std;

double FakulI(int);	// iterative Loesung

int main()
{
     int n;
     do
     {
          cout << "Eine positive Zahl (max. 170): ";
          cin >> n;
     }
     while (n < 0 || n > 170);

     cout << "DieFakultaet betraegt: " << FakulI(n) << endl;

     return 0;
}

double FakulI(int n)
{
     double f = 1;

     for (int i = 1; i <= n; i++)
     {
          f = f * i;
     }

     return f;
}

