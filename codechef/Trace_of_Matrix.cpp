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
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> matrix[i][j];
      }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        int a = i;
        int b = j;
        int sum = 0;
        while (a < n && b < n) {
          sum += matrix[a][b];
          a++;
          b++;
          ans = max(sum, ans);
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}