
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
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int hash[100]={0};

    for ( int i = 0; i < n; i++)
    {
        /* code */
        hash[arr[i]]++;
    }
    

    int q;
    cin>>q;

    while (q--)
    {
        /* code */
        int num;
        cin>>num;

       cout<<hash[num]<<endl;
    }
    
    
  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}