
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
        int n; string s;
        cin >> n>> s;

        int res = 0;
        int i = 0;
        char compare = s[0];
        while (i <= n)
        {
            if (compare==s[i])
            {
                i++;
            }
            else
            {
                compare = s[i];
                res++;
                i++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
