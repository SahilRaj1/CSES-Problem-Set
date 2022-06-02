// Coin Piles

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    // Code here
    int a, b;
    cin >> a >> b;
    while (a && b)
    {
        if (a >= b)
        {
            a -= 2;
            b--;
        }
        else
        {
            b -= 2;
            a--;
        }
    }

    if (a == b)
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