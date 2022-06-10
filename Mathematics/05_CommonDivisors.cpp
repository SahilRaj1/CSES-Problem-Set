#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
#define fr(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define frn(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define frd(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define fre(a, b) for (auto &(a) : (b))
#define f(i, n) fr(i, 0, n)
#define fn(i, n) frn(i, 1, n)
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
    vi arr(n);
    f(i, n) cin>>arr[i];
    
    int max = *max_element(all(arr));
    vb present(max+1, 0);
    

    return 0;
}