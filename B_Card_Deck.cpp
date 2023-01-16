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
/* int finMAXid(unordered_set<int>s,int key){
    FOREACH(i,b)
}

void solve(){
    int n;cin>>n;
    unordered_set<int>s;
    vector<int>arr(n);
    FOR(i,0,n){int t;cin>>t;s.insert(t);}
    vector<int>res;
    while(arr.size()!=0){
        
    }
}
 */
void solve(){
    // cout<<999999999<<endl;
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    priority_queue<pair<int,int>> q;

    for(int i=0;i<n-1;i++)
    {
        if(i==0)
        {
            q.push({a[i],0});
        }
        else if (a[i]<a[i+1])
        {
            q.push({a[i+1],i+1});
        }
    }

    vector<int> v;
    for(int i=n-1;i>=0;i--) v.push_back(a[i]);

    vector<int> temp;

    vector<int> ans;
    for(int i=n-1;i>=0;)
    {

        if(v.size()==0) break;

        while(q.top().first!=a[i])
        {
            cout<<"inside:: "<<q.top().first<<endl;
           int res =  v.front();
           cout<<"back " <<res<<endl;
        //    v.pop_front();
        v.erase(v.begin());

        //    ans.push_back(res);
        temp.push_back(res);
        //    if(i==0) break;
           i--;
           
   
        }
        
        cout<<"outside:: "<<q.top().first<<endl;
        int res = v.front();
        cout<<res<<"    i="<<i<<endl;
        // v.pop_back();
        v.erase(v.begin());
        // ans.push_back(res);
        temp.push_back(res);
        reverse(temp.begin(),temp.end());
        for(auto x:temp)
        {
            ans.push_back(x);
        }

        temp.erase(temp.begin(),temp.end());

        q.pop();
        if(i==0) break;
        i--;

    }
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;

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