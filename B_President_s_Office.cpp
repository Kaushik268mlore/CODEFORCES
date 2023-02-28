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
/* void check(int i, int j,unordered_set<char>&s,char p,int n,int m,char arr[][]){
    if(i>0&&j>0){
        if(arr[i-1][j]!=p)s.insert(p);
        if(i<n-1&&arr[i+1][j]!=p)s.insert(p);
        if(arr[i][j-1]!=p)s.insert(p);
        if(j<m-1&&arr[i][j+1]!=p)s.insert(p);
    }
}

void solve(){
    int n,m;
    char p;
    cin>>n>>m>>p;
    char arr [n][m];
    unordered_set<char>s;
    FOR(i,0,n){
        FOR(j,0,m)
            cin>>arr[i][j];
    }
    FOR(i,0,n){
        FOR(j,0,m){
            if(arr[i][j]==p){
                check(i,j,s,p,n,m,arr);
            }
        }
    }
    if(s.find('.')!=s.end())cout<<s.size()-1;
    else s.size();
 */
const int dxy [4][2] = {{0,1}, {1,0}, {-1,0}, {0,-1}};
void solve(){
    int r, c;
  char pres;
  cin >> r >> c >> pres;
  vector<string> deskMap(r);
  for(int i=0; i<r; ++i)  
    cin >> deskMap[i];
  int cnt=0;
  vector<vector<bool>> vis(r, vector<bool>(c));
  auto isValid = [&] (int i,int j)->bool{
    return i>=0 && j>=0 && i<r && j<c;
  };
 
  unordered_set<char>set;
  function<void(int,int)> DFS = [&] (int i,int j){//lambda function for DFS of the neighbouring elements.
    vis[i][j]=true;
    for(int k=0; k<4; ++k){
      int ii=i+dxy[k][0];
      int jj=j+dxy[k][1]; 
      if(isValid(ii,jj) && !vis[ii][jj] && deskMap[ii][jj] != pres && deskMap[ii][jj] != '.'){
        set.insert(deskMap[ii][jj]);
        vis[ii][jj]=true;
      }
    }
  };
  for(int i=0; i<r; ++i)  
    for(int j=0; j<c; ++j){
      if(deskMap[i][j]==pres){
        DFS(i,j);
      }
    }
  cout << set.size() << endl;
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