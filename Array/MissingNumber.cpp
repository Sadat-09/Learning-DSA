
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
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> nums[i];
    }

    int sum = n * (n + 1) / 2;
    int sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += nums[i];
    }
    int res = abs(sum - sum1);
    cout << res;
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}