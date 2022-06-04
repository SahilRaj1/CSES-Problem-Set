#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define forEach(a, b) for (auto &(a) : (b))
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
    int n;
    cin>>n;
    vi v(n);
    map<int, int> m;
    fr(i, n) {
        cin>>v[i];
        m[v[i]]++;
    }

    cout<<m.size()<<endl;

    return 0;
}