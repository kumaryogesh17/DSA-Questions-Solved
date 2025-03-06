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

  vector<int> even, odd;
  if(n == 1){
    cout<<"1\n";
    return;
  }

  if(n == 2 || n == 3){
    cout<<"NO SOLUTION\n";
    return;
  }

  for(int i=1;i<=n;i++){
    if(i%2==0){
        even.pb(i);
    }
    else{
        odd.pb(i);
    }
  }

  for(auto x: even){
    cout<<x<<" ";
  }

  for(auto x: odd){
    cout<<x<<" ";
  }

  cout<<"\n";
    
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