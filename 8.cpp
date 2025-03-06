#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define db long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int INF = 1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

vector<int> generateGrayCode(int n)
{
    vector<int> grayCodes;
    int totalNumbers = 1 << n;
    for (int i = 0; i < totalNumbers; i++)
    {
        grayCodes.push_back(i ^ (i >> 1));
    }
    return grayCodes;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> grayCodes = generateGrayCode(n);

    for (int code : grayCodes)
    {
        cout << bitset<16>(code).to_string().substr(16 - n) << "\n";
    }
}

signed main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}