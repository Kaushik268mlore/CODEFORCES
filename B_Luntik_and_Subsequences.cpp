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
bool primes[1000001]={true};
int N=1000000;
void sieve(){
   FOR(i,0,N){
    if(primes[i]==true){
        for(int j=i*i;j<=N;j+=i)primes[i]=false;
    }
   }
}
/* there will be 2^(no.of zeroes) subsets with the same sum 
and multiply that number to the no of ones u get the nearly close number of subsets 
It can be noticed that all subsequences with sum s−1 appear if we erase some 0-es from the array and also erase exactly one 1. 
We can independently calculate the number of ways to erase some 0-es from the array (that way the sum will remain the same), 
then calculate the number of ways to erase exactly one 1 from the array (that way the sum will become equal to s−1), 
and then multiply these two numbers. 
Therefore, the answer is equal to 2c0⋅c1, where c0 is the number of 0-es in the array, and c1 is the number of 1-s.
*/

void solve(){
    ll ans=1,sum=0;
    ll n;cin>>n;
    vl arr(n);
    ll z=0,o=0;
    FOR(i,0,n){cin>>arr[i];
        if(arr[i]==1)o++;
        if(arr[i]==0)z++;}
    //sort(arr.begin(),arr.end());
        cout<<(1ll<<z)*o<<endl;
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