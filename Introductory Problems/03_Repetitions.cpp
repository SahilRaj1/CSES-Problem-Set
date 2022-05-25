// Repetitions

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    long long max = 1, count = 1;
    map<char, int> m;
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            if (count > max)
                max = count;
        }
        else
        {
            if (count > max)
                max = count;
            count = 1;
        }
    }

    cout << max << endl;

    return 0;
}