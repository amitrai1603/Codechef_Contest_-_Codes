// Bitwise Tuples
// @amitrai1603   --AMIT RAIKWAR
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
ll cal(ll A, ll B)
{
    if (B == 0)
        return 1;

    else if (B % 2 == 0)
        return cal((A*A) % mod, B >> 1) % mod;
    else
        return (A * cal((A*A) % mod, B >> 1) % mod );
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll l = (cal(2, n) - 1)%mod;
        // cout << l;
        ll ans = 0;
        ans =cal(l, m)%mod;
        cout << ans << endl;
    }
    return 0;
}