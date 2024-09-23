
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
    vector<int> v(n);
    for (int i = 0; i < n; i++){
      cin>>v[i];
    }
    vector<int> ans;
    
    int max=INT_MIN;
    for (int i = n-1; i >= 0; i--)
    {
        /* code */
        if(v[i]>max){
            max=v[i];
            ans.push_back(max);
        }
    }
    for (auto i:ans)
    {
        /* code */
        cout<<i<<" ";
    }
    
    

  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}