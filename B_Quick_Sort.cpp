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
#define int long long
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

/* bool check(vector<int>arr){
    int n=arr.size();
    if(n==1)return true;
    else{
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])return false;
        }
    }
    return true;
}
void solve(){
    int n,k;cin>>n>>k;
    vector<int>arr(n);
    FOR(i,0,n)cin>>arr[i];
    int res=INT_MIN;
    if(check(arr)){cout<<"0\n";return;}
    else{
    for(int i=0;i<n;i++){
        
    }
    cout<<res<<endl;}
} */
void solve(){
            int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i];}
 
        int dp[n];
        map<int,int> m;
 
        m[0]=0;
        for(int i=0;i<n;i++)
            {
                dp[i]=-1e15;
                if(m.find(a[i]-1)!=m.end()){dp[i]=m[a[i]-1]+1;}
                if(dp[i]>0){m[a[i]]=dp[i];}
            }
 
        int ans=0;
        for(auto x:m){ans=max(ans,x.second);}
 
        cout<<(n-ans+k-1)/k<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  ll t;
  cin>>t;
  TC(t){
    solve();
  }
}