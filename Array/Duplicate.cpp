
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
    set<int>s;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
        s.insert(arr[i]);
    }
    
    int k=s.size();
    return k;

    for(auto x:s){
        cout<<x<<" ";
    }

  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}




