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
void solve(){
    int n;cin>>n;
    int a=0,b=0,c=0,d=0;
    vector<int>arr(n);
    FOR(i,0,n){
        int t;cin>>t;
        if(t==1)a++;
    else if(t==2)b++;
    else if(t==3)c++;
    else d++;
        }
    //sort(arr.begin(),arr.end());
    int res=0,no=0;
    
    d+=c+(b+1)/2;
    if(b&1)a-=2;
    a-=c;
    if(a>0){
        d+=a/4+(a%4!=0);
    }
    cout<<d;
}

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
 // LL t;
  //cin>>t;
  //TC(t){
    solve();
  //}
}