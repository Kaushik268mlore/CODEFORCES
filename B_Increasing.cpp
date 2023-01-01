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
    /* int n;cin>>n;
    vector<int>arr;
    FOR(i,0,n)cin>>arr[i];
    unordered_set<int>set(arr.begin(),arr.end());
    if(arr.size()==set.size())cout << "YES\n";
    else NO */
    int n;cin>>n;
    int arr[n];
    bool f=0;
    unordered_map<int,int>m;
    FOR(i,0,n){
        cin>>arr[i];
        m[arr[i]]++;
        if(m[arr[i]]>1)f=1;
    }
    if(!f)YES
    else NO

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
  return 0;
}
