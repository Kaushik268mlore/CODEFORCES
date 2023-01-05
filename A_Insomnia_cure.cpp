#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector<int>arg(4);
    //for(int i=0;i<4;i++)cin>>arg[i];
    int k,l,m,n;cin>>k>>l>>m>>n;
    int d;cin>>d;
    int cnt=0;
    vector<int>arr(d+1,0);
    for(int i=1;i<=d;i++){
        if(i%l==0||i%k==0||i%m==0||i%n==0)cnt++;
    }
    cout<<cnt;
}