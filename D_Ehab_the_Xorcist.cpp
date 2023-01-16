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
/* First, let's look at some special cases. If u>v or u and v have different parities, there's no array. If u=v=0, the answer is an empty array. If u=v≠0, the answer is [u].
 Now, the length is at least 2. Let x=v−u2. The array [u,x,x] satisfies the conditions, so the length is at most 3. We just need to figure out whether there's a pair of number a and b. Such that a⊕b=u and a+b=v. 
 Notice that a+b=a⊕b+2∗(a&b), so we know that a&b=v−u2=x (surprise surprise.) 
 The benefit of getting rid of a+b and looking at a&b instead is that we can look at a and b bit by bit. 
 If x has a one in some bit, a and b must both have ones, so a⊕b=u must have a 0. If x has a zero, there are absolutely no limitation on u. 
 So, if there's a bit where both x and u have a one, that is to say if x&u≠0, you can't find such a and b, and the length will be 3. Otherwise, x&u=0 which means x⊕u=x+u, so the array [u+x,x] works.
 Can you see how this array was constructed? We took [u,x,x] which more obviously works and merged the first 2 elements, benefiting from the fact that u&x=0.
 */
void solve(){
      long long u,v;
    scanf("%I64d%I64d",&u,&v);
    if (u%2!=v%2 || u>v)
    {
        printf("-1");
        return;
    }
    if (u==v)
    {
        if (!u)
        printf("0");
        else
        printf("1\n%I64d",u);
        return;
    }
    long long x=(v-u)/2;
    if (u&x)
    printf("3\n%I64d %I64d %I64d",u,x,x);
    else
    printf("2\n%I64d %I64d",(u^x),x);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  ll t=1;
 // cin>>t;
  TC(t){
    solve();
  }
}