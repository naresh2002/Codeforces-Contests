#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int a[m][2];
  int pos = 0;
  for (int i = 0; i < m; i++) {
    while (pos < n && s[pos] != t[i]) {
      pos++;
    }
    a[i][0] = pos++;
  }
  pos = n - 1;
  for (int i = m - 1; i >= 0; i--) {
    while (pos >= 0 && s[pos] != t[i]) {
      pos--;
    }
    a[i][1] = pos--;
  }
  int ans = -1;
  for (int i = 0; i < m - 1; i++) {
    ans = max(ans, a[i + 1][1] - a[i][0]);
  }
  cout << ans;
  return 0;
}
