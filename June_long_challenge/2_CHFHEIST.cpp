// Bella ciao

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll D, d, P, Q;
        cin >> D >> d >> P >> Q;
        ll tot = 0, rem = 0, n = 0;
        if (D % d == 0)
        {
            n = D / d;
            rem = 0;
        }
        else
        {
            n = D / d;
            rem = D - n * d;
        }

        tot = P * D + (Q * d) * (((n - 1) / 2.0) * (n)) + rem * (n * Q);
        cout << tot << endl;
    }

    return 0;
}