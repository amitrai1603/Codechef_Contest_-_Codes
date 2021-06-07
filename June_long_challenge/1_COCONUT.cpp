// # Summer Heat #
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;
        int tot = 0;
        if (Xa % xa != 0)
        {
            tot += Xa / xa + 1;
        }
        else
            tot += Xa / xa;

        if (Xb % xb != 0)
        {
            tot += Xb / xb + 1;
        }
        else
            tot += Xb / xb;
    
        cout<<tot<<endl;
    }
    

    return 0;
}
