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
  cin>>n;

  vector<int> v;
  ll sum = 0;
  ll actual_Sum = (ll)n*(n+1)/2;

  for(int i=1;i<n;i++)
  {
     int num;
     cin>>num;

     sum+=num;     
  }

  cout<< actual_Sum - sum <<"\n";
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