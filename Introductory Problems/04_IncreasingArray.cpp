// Increasing Array

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
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v.size() != 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                sum += (v[i - 1] - v[i]);
                v[i] = v[i - 1];
            }
        }
    }

    cout << sum << endl;

    return 0;
}