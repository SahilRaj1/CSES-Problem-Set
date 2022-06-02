// Coin Piles

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    // Code here
    int a, b;
    cin >> a >> b;
    if ((a + b) % 3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}