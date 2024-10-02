
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
    int n, m;
    cin >> n >> m;
    int arr[n+1][n+1];
    for (int i = 0; i < m; i++)
    {
        /* code */
        int u,v;
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    
  
}

int main()
{
    IO;
    solve();
    //w(t);
    return 0;
}