
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
    vector<int>v1,v2;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]!=0) v1.push_back(arr[i]);

    }

    for (int i = v1.size(); i < n; i++)
    {
        /* code */
        v1.push_back(0);
    }
   for (int i = 0; i < n; i++)
   {
    /* code */
    arr[i]=v1[i];
   }

   
   
    
    
    
    
    

}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}