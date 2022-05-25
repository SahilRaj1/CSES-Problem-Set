// Permutations

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    long n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    if (n < 4)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for (int i = 1; i < n + 1; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}