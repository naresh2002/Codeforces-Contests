#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;

//  Code learnt from bro

int32_t main () {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = 0;
    int pref[n+1];
    memset(pref, 0, sizeof pref);
    for (int i = 0; i < n; i++) {
      if (a[i] == 1) {
        pref[i + 1] += pref[i];
        continue;
      }
      for (int j = i + 2; j < min(n, i + a[i] + 1); j++) {
        pref[j]++;
      }
      pref[i + 1] += max(0LL, pref[i] - a[i] +1);
      ans += max(0LL, a[i] - pref[i] - 1);
    }
    cout << ans << endl;    
  }
  
  return 0;
}
