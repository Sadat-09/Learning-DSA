
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


int solve(int n) {
    if(n==0) return 1;

    return n * solve(n-1);
    

    
}

int main()
{
    int n;
    cin>>n;
    
    cout<<solve(n);
    //w(t);
    return 0;
}