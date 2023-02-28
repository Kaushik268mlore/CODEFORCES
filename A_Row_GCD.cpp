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
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
bool primes[1000001]={true};
int N=1000000;
void sieve(){
   FOR(i,0,N){
    if(primes[i]==true){
        for(int j=i*i;j<=N;j+=i)primes[i]=false;
    }
   }
}

/* From basic properties of GCD we know that GCD(x,y)=GCD(x−y,y)
. The same applies for multiple arguments: GCD(x,y,z,…)=GCD(x−y,y,z,…)
. Let's use this for GCD(a1+bj,…,an+bj)
 and subtract a1+bj
 from all other arguments: GCD(a1+bj,…,an+bj)=GCD(a1+bj,a2−a1,…,an−a1)
.

If we find G=GCD(a2−a1,…,an−a1)
, then any answer can be found as GCD(a1+bj,G)
. Note that we have to assume that GCD of an empty set is 0
, and GCD(x,0)=x
 for any x
, since 0
 is the only number divisible by any other number. */
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll> a(n),b(m);
    FOR(i,0,n)cin>>a[i];
    FOR(i,0,m)cin>>b[i];
    ll res=0;
    FOR(i,0,n-1)res=__gcd(res,abs(a[i]-a[i+1]));
    FOR(i,0,m)cout<<__gcd(res,a[0]+b[i])<<" ";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  ll t=1;
  //cin>>t;
  TC(t){
    solve();
  }
}