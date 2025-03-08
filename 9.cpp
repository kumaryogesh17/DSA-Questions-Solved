#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define db long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
const ll INF = 0x3f3f3f3f3f3f3f3f;

ll a , b , ans;
int p[20];


void solve() {
  int n;
  cin>>n;

  for(int i = 0; i < n; i++) {
    cin>>p[i];
  }

  ans = INF;
  for(int i=0; i<(1<<n); i++){
    a = 0;
    b = 0;

    for(int j=0; j<n;j++){
      if(i & (1<<j)){
        a += p[j];
      }else{
        b += p[j];
      }
    }

    ans = min(ans, abs(a-b));
  }

  cout<<ans<<endl;
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