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
  set<int> s;
  s.insert(0);
  s.insert(1);
  s.insert(2);
  s.insert(5);
  s.insert(8);
  
  while (t--) {
    int h, m;
    cin >> h >> m;
    string time;
    cin >> time;
    int hh = (time[0] - '0') * 10;
    hh += (time[1] - '0');
    int mm = (time[3] - '0') * 10;
    mm += (time[4] - '0');
    pair<int, int> ans;
    ans.first = 0;
    ans.second = 0;
    //int l = 0;
    cout << "hh = " << hh << "  :  " << "mm = " << mm << endl;
    
    set<pair<int, int>> valid;
    for (int i = hh; i < h; i++) {
      for (int j = mm; j < m; j++) {
        int tempi = i, tempj = j;
        int tt[4];
        
        tt[0] = (tempi / 10);
        tt[1] = (tempi % 10);
        
        tt[2] = (tempj / 10);
        tt[3] = (tempj % 10);
        
        if (i == hh && j == mm) {
          cout << " tt :\n";
          for (int i = 0; i < 4; i++) {
            cout << tt[i] << " ";
          }
          cout << endl;
        }
        
        if ((s.count(tt[0])) && (s.count(tt[1])) && (s.count(tt[2])) && (s.count(tt[3]))) {
          ans.first = i;
          ans.second = j;
          //cout << "h = " << i << "  :  " << "m = " << j << endl;
          break;
        }
        else {
          continue;
        }
      }
    }
    int HH = ans.first;
    int MM = ans.second;
    cout << "ans = ";
    if (HH < 10LL) {
      cout << 0;
    }
    cout << HH << ":";
    if (MM < 10LL) {
      cout << 0;
    }
    cout << MM << endl;
  }
  
  return 0;
}
