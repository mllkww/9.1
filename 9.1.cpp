#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;

    cout << "Function: exp(-x*x)" << endl;

    cout << setw(12) << "x"
        << setw(16) << "f(x)"
        << setw(16) << "S(x)"
        << setw(12) << "Terms" << endl;

    cout << fixed << setprecision(6);

    x = x_p;

    while (x <= x_k) {
        sum();

        cout << setw(12) << x
            << setw(16) << exp(-x * x)
            << setw(16) << s
            << setw(12) << n + 1 << endl;

        x += dx;
    }

    cin.get();
    return 0;
}