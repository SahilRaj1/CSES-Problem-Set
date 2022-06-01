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
    int n, ct = 0, mul2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (mul2 == 0 && i % 2 == 0)
        {
            mul2 = 2;
        }
        if (i % 10 == 0)
        {
            ct++;
        }
        else if (i % 5 == 0 && mul2 == 2)
        {
            ct++;
            mul2 = 0;
        }
    }

    cout << ct << endl;

    return 0;
}