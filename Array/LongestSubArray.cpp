
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
    long long n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    map<long long, int> mp;
    long long sum = 0;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += arr[i];
        if (sum == k)
        {
            l = max(l, i + 1);
        }
        long long rem = sum - k;
        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            l = max(l, len);
        }
        if (mp.find(sum) == mp.end())
        {

            mp[sum] = i;
        }
    }
    cout << l;
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}