#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  int t;
  cin >> t;
  while (t--) {
    int n, u, v;
    cin >> n >> u >> v;
    int a[n];
    set<int> s;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      s.insert(a[i]);
    }
    int ans = -1;
    for (int i = 0; i < n - 1; i++) {
      if (abs(a[i] - a[i + 1]) > 1) {
        ans = 0;
        break;
      }
    }
    if (ans == 0) {
      cout << 0 << endl;
    }
    else {
      if (s.size() == 1) {
        cout << min(u + v, v + v) << endl;
      }
      else {
        cout << min(u, v) << endl;;
      }
    }
  }
  
  
  return 0;
}
