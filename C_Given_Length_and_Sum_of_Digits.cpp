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
bool can(int m,int s){
    return s>=0&&s<=9*m;
}

void solve(){
    int n,s;
  cin>>n>>s;
  int m=n;
  if(s>m*9) {cout<<"-1 -1"<<endl;return ;}
    if(m==1&&s==0) {cout<<"0 0"<<endl;return;}
    if(s<1) {cout<<"-1 -1"<<endl;return ;}
 /*    string max="";
    string min="";
    int sum=s;
    if(!poss(m,s))cout<<"-1 -1"<<endl;
    while(sum){
        if(sum>9){
            max+='9';
        //    sum-=9;
        }
        else {
            max+='0'+sum;
        }
        sum-=9;
    }
    while (max.size()<m)max+='0';
    
    for(int i=0;i<m;i++){
        for(int j=0;j<10;j++){
            if((i>0||j>0||m==1||s==0)&&poss(m-i-1,s-j)){
                min+='0'+j;
                s-=j;
                break;
            }
        }
    cout<<min<<' '<<max;} */
    string str="",minn="";
  int sum=s;
  while(sum>0)
  {
      if(sum>=9)
      str+='9';
      else
      str+='0'+sum;
      sum-=9;
  }
   while(str.size()<n)
   str+='0';
   
    sum = s;
    for (int i = 0; i < n; i++)
        for (int d = 0; d < 10; d++)
            if ((i > 0 || d > 0 || (n == 1 && d == 0)) && can(n - i - 1, sum - d))
            {
                minn += char('0' + d);
                sum -= d;
                break;
            }
   
   
  cout<<minn<<' '<<str;
}

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  //ll t;
  //cin>>t;
 // TC(t){
    solve();
  
}