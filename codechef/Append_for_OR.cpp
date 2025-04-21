#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, y;
    cin >> n >> y;

    int res = 0;
    for (int i = 0; i < n; i++) {
      int var;
      cin >> var;
      res = res | var;
    }
    // 0111
    // 1111 (*_*)
    if ((res | y) != y) {
      cout << -1 << "\n";
    } else {

      int i = y - res;
      cout << i << "\n";
    }
  }
  return 0;
}
