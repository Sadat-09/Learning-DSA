
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
bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}


bool solve(int i,string& s)
{
    if(i>=s.size()/2) return true;

    else if(s[i]!=s[s.size()-i-1]) return false;
else{
    return solve(i+1,s);
}
    
    
}

int main()
{
    IO;
    string s;
    cin>>s;
   cout<<solve(0,s);
    // w(t);
    return 0;
}