#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define db long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()



void solve() {
  string s;
  cin>>s;

  int max_repetaion = 0;
  int current_repetaion = 1;

  for(int i=0;i<s.size();i++)
  {
    if(s[i] == s[i-1]){
        current_repetaion++;
    }
    else{
        max_repetaion = max(max_repetaion, current_repetaion);
        current_repetaion = 1;
    }
  }

  max_repetaion = max(max_repetaion, current_repetaion);
  cout<<max_repetaion<<"\n";


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