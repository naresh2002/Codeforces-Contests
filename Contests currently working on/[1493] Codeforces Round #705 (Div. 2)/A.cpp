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
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    for (int i = k; i < n; i++) {
      ans.PB(i + 1);
    }
    for (int i = (k + 1) / 2; i < k; i++)  {
      ans.PB(i);
    }
    cout << ans.size() << endl;
    for (auto x : ans) {
      cout << x << " ";
    }
    cout << endl;
  }
  
  return 0;
}
