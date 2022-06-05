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
    fr(i, n) cin >> des_size[i];
    fr(i, m) cin >> apt_size[i];

    sort(all(des_size));
    sort(all(apt_size));
    // fre(it, des_size) cout << it << " ";
    // cout << endl;
    // fre(it, apt_size) cout << it << " ";
    int ans = 0;
    FORD(i, n - 1, 0)
    {
        FORD(j, m - 1, 0)
        {
            if (abs(des_size[i] - apt_size[j]) <= k)
            {
                ans++;
                des_size.pp();
                apt_size.pp();
                n--;
                m--;
                break;
            }
            else
            {
                des_size.pp();
                n--;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}