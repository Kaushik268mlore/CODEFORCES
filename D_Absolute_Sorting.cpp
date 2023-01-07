/* #include <bits/stdc++.h>
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

// i solved this using binary search
void solve(){
    int n;cin>>n;
    vi arr(n);
    bool sol=false;
    int l=INT_MAX,h=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        l=min(l,arr[i]);
        h=max(h,arr[i]);
    }
    while(l<=h){
        int mid=l+(h-l)/2;
        bool high =false,low=false,ans=true;
        for(int i=0;i<n;i++){
            if(abs(mid-arr[i])>abs(mid-arr[i-1])){
                ans=false;
                if(ans){cout<<mid<<endl;return;}
                if(arr[i]>arr[i-1])high=true;
                else low=true;
            }
        }
        if(high)l=mid+1;
        if(low)h=mid-1;
    }
    if(!sol)cout<<"-1\n";
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
} */
#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define int long long

int32_t main() {
    fast();

    int t;
    cin >> t;
    while (t--) {
        int n, l = 1e9, h = 0, m;
        bool sol = false;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            l = min(l, a[i]);
            h = max(h, a[i]);
        }
        while (l <= h) {
            bool high = false, low = false, ans = true;
            m = (l + h) / 2;
            for (int i = 1; i < n; i++) {
                if (abs(m - a[i]) < abs(m - a[i - 1])) {
                    ans = false;
                    high = a[i] > a[i - 1];
                    low = a[i] < a[i - 1];
                }
            }
            if (ans) {
                cout << m << endl;
                sol = true;
                break;
            }
            if (high)
                h = m - 1;
            else if (low)
                l = m + 1;
        }
        if (!sol)
            cout << -1 << endl;
    }
    return 0;
}