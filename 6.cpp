#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define db long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()


void solve() {
  ll row, col;
  cin >>row >> col;

  ll ans;
  if(row > col){
    if(row % 2 == 1){
        ans = (row-1)*(row-1) + col;
    }
    else{
        ans = row * row - col + 1;
    }
  } else{
    if(col % 2 == 1){
        ans = col * col - row + 1;
    }else{
        ans = (col-1)*(col-1) + row;
    }
  }

  cout<<ans<<"\n";

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