
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
    int arr[n+1];

     arr[0]=0;
     arr[1]=1;

    

    for (int i = 2; i <=n; i++)
    {

        arr[i]=arr[i-1]+arr[i-2];
       

    }

     for (int i = 0; i <=n; i++)
    {

       cout<<arr[i]<<" ";
       

    }   
    
  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}