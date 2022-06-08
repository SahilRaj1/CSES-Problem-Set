// Counting Divisors

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
typedef set<int> si;
typedef set<ll> sll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<char, int> mci;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define fre(a, b) for (auto &(a) : (b))
#define fr(i, n) FOR(i, 0, n)
#define frn(i, n) FORN(i, 1, n)
#define sqr(x) ((LL)(x) * (x))
#define endl "\n"
#define pb push_back
#define pp pop_back
#define fi first
#define se second
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define alla(arr, sz) arr, arr + sz
const int M = 1e9 + 7;

const int X = 1e6 + 2;
vi divisors(X);

void solve()
{
    // Code here
    int x;
    cin >> x;
    cout << 1 + divisors[x] << endl;

    return;
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

    divisors[1] = 0;
    FOR(i, 2, X)
    {
        for (int j = i; j < X; j += i)
        {
            divisors[j]++;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}