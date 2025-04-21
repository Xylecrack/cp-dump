#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        long total =
            (((a - (a % 2)) / 2) * ((b - (b % 2)) / 2)) + ((a - ((a - (a % 2)) / 2)) * (b - ((b - (b % 2)) / 2)));
        cout << total << "\n";
    }

    return 0;
}
// odd+odd=even
// even+even=even
// 1,1 1,3 2,2 3,1 3,3