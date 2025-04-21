#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> sticks(n);
    for (int i = 0; i < n; i++) {
      cin >> sticks[i];
    }

    unordered_map<int, int> sticksHash;
    for (auto i : sticks) {
      if (i == 0) {
        continue;
      }
      sticksHash[i]++;
    }
    cout << sticksHash.size() << "\n";
  }

  return 0;
}