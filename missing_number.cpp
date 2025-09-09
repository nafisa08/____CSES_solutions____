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
    ll n, tsum = 0, vsum = 0;
    cin >> n;
    vector<ll>a(n+1);
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
    {
        tsum += i;
    }
    for (ll i = 1; i <= n; i++)
    {
        vsum += a[i];
    }
    cout << tsum - vsum << endl;
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
