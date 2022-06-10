#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
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

const int N = 1e7 + 10;
vb isPrime(N, 1);
unordered_map<int, int> m;

int binExp(int a, int b, int m)
{
    a %= m;
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * 1LL * a) % m;
        a = (a * 1LL * a) % m;
        b = b >> 1;
    }
    return ans;
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
    isPrime[0] = isPrime[1] = false;

    // highest and lowest prime factors of a number
    vi lp(N, 0);
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            lp[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                if (lp[j] == 0)
                    lp[j] = i;
            }
        }
    }

    int n;
    cin >> n;
    n %= M;

    int finalAns = 0;
    for (int i = 2; i <= n; i++)
    {
        int ans = 1;
        int temp = i;
        m.clear();
        vi prime_factors;
        while (temp > 1)
        {
            prime_factors.pb(lp[temp]);
            m[lp[temp]]++;
            temp /= lp[temp];
        }
        for (auto &prime : m)
        {
            int num = binExp(prime.fi, prime.se + 1, M) - 1;
            int den = prime.fi - 1;
            ans = ans % M * 1LL * num % M * binExp(den, M - 2, M) % M;
            // cout << prime.fi << " " << prime.se << endl;
        }
        finalAns += ans;
    }

    cout << finalAns + 1 << endl;

    return 0;
}