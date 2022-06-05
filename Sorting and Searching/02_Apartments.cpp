#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
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
#define pb push_back
#define pp pop_back
#define fi first
#define se second
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define alla(arr, sz) arr, arr + sz
const int MOD = 1e9 + 7;

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
    int n, m, k;
    cin >> n >> m >> k;
    vi des_size(n);
    vi apt_size(m);
    unordered_map<int, int> aflag, dflag;
    fr(i, n)
    {
        cin >> des_size[i];
        dflag[i] = 0;
    }
    fr(i, m)
    {
        cin >> apt_size[i];
        aflag[i] = 0;
    }

    sort(all(des_size));
    sort(all(apt_size));

    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if (abs(des_size[i] - apt_size[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            if (des_size[i] - apt_size[j] > k)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}