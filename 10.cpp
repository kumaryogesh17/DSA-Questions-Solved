#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define db long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

ll pow10(int n) {
  ll res = 1;
  for(int i = 0; i < n; i++) {
    res *= 10;
  }
  return res;
}



void solve() {
  ll n;
  cin>>n;
  n--;
  int len = 1;

  if(n<9) cout<<(n+1)<<"\n";
  else{  
  while(9*pow10(len-1)*len < n){
    n -= 9*pow10(len-1)*len;
    len++;
  }
  string s = to_string(pow10(len-1) + (n)/len);
  cout<<s[(n)%len]<<endl;
  }
  
}

signed main() {
    IOS;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}