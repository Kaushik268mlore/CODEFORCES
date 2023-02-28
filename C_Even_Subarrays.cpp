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


void solve()
{
	LL n;
	cin >> n;
	vector<int> a(n);
	for (auto& e : a)
		cin >> e;
 
	vector<int> freq(2 * n + 1);
	LL ans = 0;
	freq[0] = 1;
	int xorTillHere = 0;
	for (auto e : a)
	{
		xorTillHere ^= e;
		for (LL i = 0; i * i <= 2 * n; ++i)
			if ((xorTillHere ^ (i * i)) <= 2 * n)
				ans += freq[xorTillHere ^ (i * i)];
		freq[xorTillHere]++;
		// cout << ans << '\n';
	}
 
	cout <<n*(n + 1)/2-ans<<'\n';
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