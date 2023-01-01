#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
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


void solve(){
    LL n,k=0,res=0;
    cin>>n;
    vl arr(n);
    FOR(i,0,n)cin>>arr[i];
    FORD(i,n-2,0){
        if(arr[i]==0){
            k++;
        }
        else{
            res+=k;
            k=0;
        }
    }
    res+=accumulate(arr.begin(),arr.end()-1,0LL);
    cout<<res<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  LL t;
  cin>>t;
  TC(t){
     solve();   
  }

}