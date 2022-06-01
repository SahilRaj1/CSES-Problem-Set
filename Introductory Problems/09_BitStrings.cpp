// Bit Strings

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    ll n, ans = 1;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        ans = (ans * 2) % mod;
    }

    cout << ans << endl;

    return 0;
}