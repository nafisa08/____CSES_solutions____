#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
const double PI = acos(-1);
const ll MOD = 1e18;
 
void solve()
{
    // cout << fixed << setprecision(2);  //-1 3 -1 2
    ll r, c;
    cin >> r >> c;
    if (r == c)
    {
        cout << ((r * c) - (r - 1)) << endl;
    }
    else if (r > c)
    {
        if (r % 2 == 0)
        {
            cout << ((r * r) - (r - 1)) + (r - c) << endl;
        }
        else
        {
            cout << ((r * r) - (r - 1)) - (r - c) << endl;
        }
    }
    else if (c > r)
    {
        if (c % 2 == 0)
        {
            cout << ((c * c) - (c - 1)) - (c - r) << endl;
        }
        else
        {
            cout << ((c * c) - (c - 1)) + (c - r) << endl;
        }
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tstcs;
    cin >> tstcs;
    for (int t = 1; t <= tstcs; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}
