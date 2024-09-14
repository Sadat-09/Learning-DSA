
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
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
        /* code */
    }
    
    int maxi=0,count=0;

        for(int i=0;i<n;i++){
            if(nums[i]==1) count++;
            else{
                 maxi=max(maxi,count);
                 count=0;

            }
        }
        int x= max(count,maxi);
        cout<< x;
  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}