#include <bits/stdc++.h>
using namespace std;

int totalsess(int D, int X, int Y) {
  for (int s = 0; s <= 100; ++s) {
    int total_discount = min(100, D * s);
    int discounted_cost = (X * (100 - total_discount)) / 100;
    int total_cost = s + discounted_cost;

    if (total_cost <= Y) {
      return s;
    }
  }
  return -1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int D, X, Y;
    cin >> D >> X >> Y;
    cout << totalsess(D, X, Y) << '\n';
  }
  return 0;
}
