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
    int p, a, b, c;
    cin >> p >> a >> b >> c;
    cout << min({(p + a - 1)/ a * a, (p + b - 1)/ b *  b, (p + c - 1)/ c * c}) - p << endl;
  }
  
  return 0;
}
