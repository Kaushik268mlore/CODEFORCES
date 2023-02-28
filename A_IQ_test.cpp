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
    int n; cin>>n;
    int a[2][n+1],cnt[2]={0},x,y;
    for(int i=1;i<=n;i++)
    {
        cin>>x; y=x%2;
        cnt[y]++; a[y][cnt[y]]=i;
    }
    if(cnt[0]==1) cout<<a[0][1]<<endl;
    else cout<<a[1][1]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  /* LL t;
  cin>>t; */
  //TC(t){
    solve();
  //}
}