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


/* void solve(){
    ll n;cin>>n;
    vector<int>arr(n+);
         vector<int>l(n+1);
    vi r(n+1); 
    ll tp=1;
    FORN(i,1,n){cin>>arr[i];tp*=arr[i];}
    //cout<<tp<<"TP"<<endl;
    ll lp=1,rp=1;
    bool fl=1;
    if(tp==1){cout<<1<<endl;fl=0;return;}
    FORN(i,1,n){
        lp*=arr[i];
        //cout<<lp<<" ";
        rp=tp/lp;
        //cout<<rp<<" ";
        //cout<<endl;
        if(lp==rp&&tp%lp==0){
            cout<<i<<endl;fl=0;
            break;
        }
    }
    if(fl)cout<<"-1"<<endl;
}*/ 


void solve(){
 
    int n; cin >> n;
    vi a(n); for(auto &x : a) cin >> x;
    for(auto &x : a) x = (x == 2);
 
    int ssum = accumulate(a.begin(),a.end(), 0);
    int psum = 0;
    
    for(int i=0; i < n; i++){
        psum += a[i];
        ssum -= a[i];
        if(psum == ssum){
            cout << i+1 << '\n';
            return;
        }
    }
    cout << -1 << '\n';
 
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