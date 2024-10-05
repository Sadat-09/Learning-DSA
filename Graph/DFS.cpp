
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
bool check_prime(int n)
{
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}
void dfs(int node, vector<int> adj[], int vi[], vector<int> &li)
{
    li.push_back(node);
    vi[node] = 1;
    for (auto it : adj[node])
    {
        if (!vi[it])
        {
            dfs(it, adj, vi, li);
        }
    }
}


void solve()
{

    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        /* code */
    }

    int vi[n] = {0};
    vector<int> li;
    int start = 0;

    dfs(start, adj, vi, li);

    for (auto i : li)
    {
        cout << i << " ";
    }
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}