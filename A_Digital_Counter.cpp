#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;cin>>s;
    vector<int>arr(10);
    arr[0] = 2;
    arr[1] = 7;
    arr[3] = 3;
    arr[2] = 2;
    arr[4] = 3;
    arr[5] = 4;
    arr[6] = 2;
    arr[7] = 5;
    arr[8] = 1;
    arr[9] = 2;
    cout<<arr[s[0]-'0']*arr[s[1]-'0']<<"\n";
}
int32_t main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}