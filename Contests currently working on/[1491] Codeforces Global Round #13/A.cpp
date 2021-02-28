#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  int n, q;
  cin >> n >> q;
  int a[n + 1];
  int c[2];
  c[0] = 0;
  c[1] = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0) {
      c[0]++;
    }
    else {
      c[1]++;
    }
  }
  
  while (q--) {
    int t;
    cin >> t;
    if (t == 1){
      int x;
      cin >> x;
      x--;
      c[a[x]]--;
      c[1 - a[x]]++;
      a[x] = 1 - a[x];
    }
    else {
      int k;
      cin >> k;
      if (k <= c[1]) {
        cout << "1\n";
      }
      else {
        cout <<"0\n";
      }
    }
  }
  
  return 0;
}
