#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define db long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()


void solve() {
  ll n;
  cin>> n;

  while(n>1)
  {
    if(n%2==0)
    {
      cout<<n<<" ";
      n=n/2;
    }
    else
    {
      cout<<n<<" ";
      n=3*n+1;
    }
  }
  if(n==1)
  {
    cout<<n;
  } 

}

signed main() {
    IOS;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}