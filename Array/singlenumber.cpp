
#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;


void solve()
{
    int n;
    cin>>n;

    int arr[n];
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
       mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second==1) cout<<i.first;
    }
    
  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}