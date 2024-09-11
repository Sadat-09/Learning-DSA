
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
    int k;
    cin>>k;
    k=k%n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int l=n-k;
    int arr2[n];

    for(int i = 0; i < n; i++)
    {
        /* code */
        arr2[i]=arr[l];
        l++;
    }
    int m=0;
    for (int i = k; i < n; i++)
    {
        /* code */
         arr2[i]=arr[m];
        m++;

    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr2[i]<<" ";
    }
    
    
    
  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}