
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


void solve(int i,int n)
{
    if(n<1) return;

    cout<<n<<" ";
    solve(i,n-1);

  
}

int main()
{
    int n;
    cin>>n;

    IO;
    solve(1,n);
    //w(t);
    return 0;
}