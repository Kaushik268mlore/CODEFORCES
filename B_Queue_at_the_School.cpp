#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;cin>>n>>t;
    string s;cin>>s;
    //int n=q.size();
    for(int i=0;i<t;i++){
        for(int i=0;i<n-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){swap(s[i],s[i+1]);i++;}
        }
    }
    cout<<s;
}