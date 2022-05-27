// Two Sets

#include <bits/stdc++.h>
using namespace std;

void printSS(int num, int n, vector<int> &v, int sum, int target)
{
    if (num > n)
    {
        if (sum == target)
        {
            cout << v.size() << endl;
            for (auto &value : v)
                cout << value << " ";
            cout << endl;
        }
        return;
    }
    // take
    v.push_back(num);
    sum += num;
    printSS(num + 1, n, v, sum, target);
    sum -= num;
    v.pop_back();
    // not take
    printSS(num + 1, n, v, sum, target);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n;
    cin >> n;
    vector<int> v;
    int sum = 0;
    int target = (n * (n + 1)) / 4;
    if ((n * (n + 1)) % 4 == 0)
    {
        cout << "YES" << endl;
        printSS(1, n, v, sum, target);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}