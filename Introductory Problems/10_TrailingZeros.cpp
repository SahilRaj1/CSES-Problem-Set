// Trailing Zeros

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n, ct = 0;
    cin >> n;

    for (int i = 5; i <= n; i *= 5)
    {
        ct += n / i;
    }

    cout << ct << endl;

    return 0;
}