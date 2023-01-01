#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
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
#define mod 1000000007
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
void solve(){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i];}
 
        int poss=1;
        for(int i=2;i<=n+5;i++)
            {
                int cnt[i];
                memset(cnt,0,sizeof(cnt));
                for(auto x:a)
                    {
                        cnt[x%i]++;
                    }
                int op=1;
                for(auto h:cnt){if(h<2){op=0;break;}}
                if(op){poss=0;break;}
            }
 
        sort(a,a+n);
        for(int i=1;i<n;i++)
            {
                if(a[i]==a[i-1]){poss=0;break;}
            }
 
        if(poss){cout<<"YES\n";}
        else{cout<<"NO\n";}
}

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  ll t;
  cin>>t;
  TC(t){
    solve();
  }
}