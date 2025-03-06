#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define db long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()




void solve() {
  int n;
  cin>>n;
  vector<int> v(n);

  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  ll cnt=0;
  ll prev = v[0];

  for(int i=1;i<n;i++){
    if(v[i]< prev){
        cnt += prev -v[i];
    }else{
        prev = v[i];
    }
  }
  cout<<cnt<<"\n";


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