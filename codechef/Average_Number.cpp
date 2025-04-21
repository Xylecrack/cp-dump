#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k,v;
        cin>>n>>k>>v;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            sum+=temp;
        }
        if((n+k)*v<=sum||(((n+k)*v)-sum)%k!=0){
            cout<<-1<<"\n";
        }
        else{
            cout<<((((n+k)*v)-sum)/k)<<"\n";
        }
    }

    return 0;
}