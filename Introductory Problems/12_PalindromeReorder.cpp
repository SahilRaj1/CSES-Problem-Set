#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
using namespace std;

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
    string s, s1 = "", s2 = "";
    cin >> s;
    map<char, int> m1, m2;
    for (auto &it : s)
    {
        m1[it]++;
        m2[it]++;
    }

    // cout << m2.size() << endl;

    for (auto &item : m1)
    {
        char letter = item.first;
        int ct = item.second;
        auto it = m2.find(letter);
        if (ct % 2 == 0)
        {
            for (int j = 0; j < (ct / 2); j++)
            {
                s1.push_back(letter);
                s2.push_back(letter);
            }
            m2.erase(it);
        }
    }
    // cout << m2.size() << endl;

    reverse(s2.begin(), s2.end());

    if (m2.size() > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if (m2.size() == 0)
    {
        cout << s1 << s2 << endl;
    }
    else
    {
        cout << s1;
        pair<char, int> p = *m2.begin();
        for (int i = 0; i < p.second; ++i)
        {
            cout << p.first;
        }
        cout << s2;
    }

    return 0;
}