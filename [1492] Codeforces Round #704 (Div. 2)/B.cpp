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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    map<int, int, greater<int>> m;
    for (int i = n - 1; i >= 0; i--) {
      m[a[i]] = i;  
    }
    vector<int> ans;
    int prev = n;
    for (auto x : m) {
      for (int i = x.second; i < prev; i++) {
        ans.PB(a[i]);
      }
      prev = min(prev, x.second);
    }
    for (auto x : ans) {
      cout << x << " ";
    }
    cout << endl;
  }
  
  return 0;
}
