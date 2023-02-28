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
//vector<int>dp1,dp2;
const int N=1e5+10;
LL dp1[N],dp2[N];
void create(vector<LL>arr,int n){
    dp1[0]=0,dp2[n-1]=0;
    FOR(i,1,n){
            dp1[i]=dp1[i-1]+max(0LL,arr[i-1]-arr[i]);
    }
    FORD(i,n-2,0){
        dp2[i]=dp2[i+1]+max(0LL,arr[i+1]-arr[i]);
    }
}

void solve(){
    int n,m,ans=0;cin>>n>>m;
    vector<LL>arr(n);
    FOR(i,0,n)cin>>arr[i];
    create(arr,n);
    //FOREACH(a,dp1)cout<<a<<" ";
    
    //vector<vector<int>>st(m,vector<int>(2));
    FOR(i,0,m){
        int s,t;
        cin>>s>>t;
        if(s<=t)cout<<dp1[t-1]-dp1[s-1]<<"\n";
        else cout<<dp2[t-1]-dp2[s-1]<<"\n";
        //cout<<(s<t)?dp1[t-1]-dp1[s-1]:dp2[t-1]-dp2[s-1];cout<<"\n";
        //ans=(dp[t-1]-dp[s-1]);
        //cout<<ans<<"\n";
    }
    
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