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
ll a[105][105],b[105][105],c[105][105];
ll n,m,k;

ll get(int s,int e,ll a[],ll b[],ll c[],ll m,ll k){
  priority_queue<int> pq;
 
  for(int i=0; i<m; ++i){
    int profit = b[e][i] - a[s][i];
    for(int j=0; j<c[s][i]; ++j)
      pq.push(profit);
  }
 
  int ret=0;
  for(int i=0; !pq.empty() && i<k; ++i){
    if(pq.top() > 0) ret += pq.top();
    else break;
    pq.pop();
  }
 
  return ret;
}
int a[105][105], b[105][105], c[105][105];
int k, n, m;
void solve(){
    ll a[105][105],b[105][105],c[105][105];
    ll n,m,k;
    cin >> n >> m >> k;
    for(int i=0; i<n; ++i){
      string planet;
      cin >> planet;
 
      for(int j=0; j<m; ++j)
        cin >> a[i][j] >> b[i][j] >> c[i][j];
    }
 
    int ans=0;
    for(int i=0; i<n; ++i)
      for(int j=0; j<n; ++j)  
        if(i!=j)
          ans=max(ans, get(i, j,a,b,c,m,k));
 
    cout << ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  ll t=1;
  cin>>t;
  TC(t){
    solve();
  }
}