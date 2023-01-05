#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int s=1,p=k;
    for(;s<10;s++,p+=k){
        if(p%10==r||p%10==0)break;
    }
    cout<<s;
}