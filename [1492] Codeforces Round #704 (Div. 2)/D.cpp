#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  int a, b, k;
  cin >> a >> b >> k;
  
  if (a == 0 || b == 1) {
    if (k == 0) {
      cout << "YES\n";
      for (int i = 0; i < b; i++) {
        cout << '1';
      }
      for (int i = 0; i < a; i++) {
        cout << '0';
      }
      cout << endl;
      for (int i = 0; i < b; i++) {
        cout << '1';
      }
      for (int i = 0; i < a; i++) {
        cout << '0';
      }
    }
    else {
      cout << "NO\n";
    }
  }
  else {
    if (k > a + b - 2) {
      cout << "NO\n";
    }
    else {
      string s1, s2;
      for (int i = 0; i < b; i++) {
        s1 += '1';
      }
      for (int i = 0; i < a; i++) {
        s1 += '0';
      }
      s2 = s1;
      int p = b - 1;   //  Last continuous 1
      if (a + b - 1 <= p + k) {
        swap(s2[a + b - 1], s2[p]);
        k -= (a + b - 1 - p);
        p--;
      }
      else{
        swap(s2[p + k], s2[p]);
        k = 0;
      }
      while (k > 0) {
        swap(s2[p], s2[p + 1]);
        p--;
        k--;
      }
      cout << "YES\n";
      cout << s1 << endl << s2 << endl;
    }
  }
  
  
  return 0;
}
