// Two Sets

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
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        ll target = sum / 2;
        set<ll> s1, s2;
        for (int i = 1; i <= n; i++)
            s1.insert(i);
        ll t = n;
        while (target > 0 && s1.count(target) == 0)
        {
            s2.insert(t);
            s1.erase(t);
            target -= t;
            t--;
        }
        s1.erase(target);
        s2.insert(target);
        cout << s1.size() << endl;
        for (auto &value : s1)
            cout << value << " ";
        cout << endl;
        cout << s2.size() << endl;
        for (auto &value : s2)
            cout << value << " ";
        cout << endl;
    }

    return 0;
}