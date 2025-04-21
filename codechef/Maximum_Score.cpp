// //MAXSCORE7
// #include <bits/stdc++.h>
// using namespace std;

// int countMax(int n, vector<int> &arr)
// {
//     int res = 0;
//     for (int i = 0; i < n - 1; )
//     {
//         if (arr[i] + arr[i + 1] == 1)
//         {
//             res++;
 /*LOL i thought i could get away with vector element deleteion lmfao*/
//             arr.erase(arr.begin() + i);
//             arr.erase(arr.begin() + i);
//             return res + countMax(n-2, arr);
//         }
//         else
//         {
//             i++;
//         }
//     }
//     return res;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int res = countMax(n, arr);
//         cout << res << "\n";
//     }

//     return 0;
// }
// //1 0 1 1 1 1 0 0 1 0
// //1 1 1 1 0 0 1 0   +1
// //1 1 1 0 1 0       +1
// //1 1 1 0           +1
// //1 1               +0
// MAXSCORE7
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
        int n;
        cin >> n;
        unordered_map<int, int> hash;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i : arr)
        {
            hash[i]++;
        }
        if (hash[1] == 0 || hash[0] == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            int a = min(hash[1], hash[0]);
            cout << min(n / 2, a) << "\n";
        }
    }

    return 0;
}
