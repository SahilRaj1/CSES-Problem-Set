// Weird Algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n;
    cin >> n;
    while (true)
    {
        cout << n << " ";
        if (n == 1)
        {
            break;
        }
        else
        {
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n = (n * 3) + 1;
            }
        }
    }

    return 0;
}