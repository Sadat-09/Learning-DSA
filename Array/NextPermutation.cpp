
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
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int ind=-1;

    for (int i = n-2; i >= 0; i--)
    {
        if(v[i]<v[i+1])
        {
            ind=i;
            break;
        }
    }
    if(ind==-1)
    {
        reverse(v.begin(),v.end());
    }
    else
    {
        for (int i = n-1; i > ind; i--)
        {
            if(v[i]>v[ind]){
                swap(v[i],v[ind]);
                break;
            }
        }
        reverse(v.begin()+ind+1,v.end());
    }
    for (int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    }
    cout << endl;
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}