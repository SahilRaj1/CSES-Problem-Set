// Two Knights

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cout << ((i * i) * (i * i - 1) / 2) - (4 * (i - 2) * (i - 1)) << endl;
    }

    return 0;
}