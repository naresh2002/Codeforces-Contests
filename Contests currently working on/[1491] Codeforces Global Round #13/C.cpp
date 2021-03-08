#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;

//  Code from jiangly

int32_t main () {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    int ans = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      if (s[i] - v[i] > 1) {
        ans += s[i] - v[i] - 1;
        v[i] = s[i] - 1;
      }
      for (int j = i + 2; j <= min(n - 1, i + s[i]); j++) {
        v[j]++;
      }
      if (i + 1 < n) {
        v[i + 1] += v[i] - (s[i] - 1);
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}
