#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define YES                          cout << "YES\n";
#define NO                           cout << "NO\n";
#define Yes                          cout << "Yes\n";
#define No                           cout << "No\n";
#define TC(t) while (t--)
LL mod=1000000007;

LL powerr(LL x,LL y)
{
    if(y==0){return 1;}
    LL z=powerr(x,y/2);
    z=z*z;
    z%=mod;
    if(y%2)
        {
            z=z*x;
            z%=mod;
        }
    return z;
}
 
LL inv(LL x)
{
    return powerr(x,mod-2);
}


void solve(){
    LL n;
            cin>>n;
            LL ans=n*(n+1);
            ans%=mod;
            ans*=(2*n+1);
            ans%=mod;
            ans*=inv(3);
            ans%=mod;
            LL h=n*(n+1);
            h%=mod;
            h*=inv(2);
            h%=mod;
            ans+=(mod-h);
            ans%=mod;
            ans*=2022;
            ans%=mod;
            cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  LL t;
  cin>>t;
  TC(t){
     solve();   
  }

}