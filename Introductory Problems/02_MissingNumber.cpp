//  Missing Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    long long n, sum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        long long x;
        cin >> x;
        sum += x;
    }

    cout << ((n * (n + 1)) / 2) - sum << endl;

    return 0;
}