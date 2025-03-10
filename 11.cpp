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
#define vi vector<int>
#define pii pair<int, int>
#define mp make_pair
#define fi first
#define se second

void solve()
{
    int n;
    cin >> n;

    long long sum = (long long)n * (n + 1) / 2;

    if (sum % 2)
    {
        cout << "NO";
        return;
    }

    cout << "YES" << "\n";
    long long target_Sum = sum / 2;
    vi a, b;

    for (int i = n; i >= 1; i--)
    {
        if (target_Sum >= i)
        {
            a.pb(i);
            target_Sum -= i;
        }
        else
        {
            b.pb(i);
        }
    }
    cout << a.size() << "\n";
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << "\n";
    cout << b.size() << "\n";
    for (auto x : b)
    {
        cout << x << " ";
    }
    cout << "\n";
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
