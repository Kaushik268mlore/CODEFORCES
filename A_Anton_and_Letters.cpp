#include<bits/stdc++.h>
using namespace std;
vector<int>freq(27,0);
int main(){
    string s;
    getline(cin,s);
    int ans=0;
    int i=-1;
    while(s[i]!='}'){
        i++;
        if(freq[s[i]-'a']==0&&(s[i]>='a'&&s[i]<='z')){ans++;freq[s[i]-'a']=1;}
    }
    cout<<ans;
}