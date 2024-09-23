
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
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
     vector<int> pos;
        vector<int> neg;

       
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0) 
                neg.push_back(nums[i]);
            else 
                pos.push_back(nums[i]);
        }

        vector<int> final(nums.size()); 
        
       int posi=0,negi=0;
        
        for(int i = 0; i < nums.size()-1; i+=2) {
           final[i]=pos[posi++];
            final[i+1]=neg[negi++];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<final[i]<<" ";
        }
        
  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}