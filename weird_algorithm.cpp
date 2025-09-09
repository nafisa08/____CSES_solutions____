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
    // cout << fixed << setprecision(2);
    ll n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;
    }
    cout << 1 << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll tstcs;
    // cin >> tstcs;
    // for (int t = 1; t <= tstcs; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}
