// Gray Code

#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back;
#define pp pop_back;
using namespace std;

void printBinary(int num)
{
    for (int i = 0; i < round(pow(2, num)); i++)
    {
        for (int j = num - 1; j >= 0; --j)
        {
            cout << ((i >> j) & 1);
        }
        cout << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Code here
    int n;
    cin >> n;
    printBinary(n);

    return 0;
}