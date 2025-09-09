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
    string s;
    // ll ct=1,ca=1,cc=1,cg=1;
    ll cnt = 1, ans = 1;
    cin >> s;
    for (ll i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
            cnt++;
        else
            cnt = 1;
        ans = max(ans, cnt);
        // else if(s[i-1]=='A' && s[i]=='A') ca++;
        // else if(s[i-1]=='C' && s[i]=='C') cc++;
        // else if(s[i-1]=='G' && s[i]=='G') cg++;
    }
    // if(ct>ca && ct>cc && ct>cg) cout<<ct<<endl;
    // else if(ca>ct && ca>ct && ca>cg) cout<<ca<<endl;
    // else if(cc>ct && cc>ca && cc>cg) cout<<cc<<endl;
    // else cout<<cg<<endl;
    cout << ans << endl;
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
