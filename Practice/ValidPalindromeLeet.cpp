
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


string solve()
{
    string s;
    cin>>s;
    if(s.size()<=1) return "true";

        int st=0, end=s.size()-1;

        while(st<end){
            while(st<end and !isalnum(s[st])) st++;
            while(st<end and !isalnum(s[end])) end--;

            if(tolower(s[st])!=tolower(s[end]) and st<end  ) return "false";
            st++;
            end--;
        }

        return "true";

    
}

int main()
{
    IO;
    cout<<solve();
    // w(t);
    return 0;
}