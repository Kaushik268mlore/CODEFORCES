#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count=0;
    char ch='\0';
    for(char c:str){
        if(c>ch){
            c=ch;
            count=1;
        }
        else if(c==ch)count++;
    }
    for(int i=0;i<count;i++){
        cout<<ch;
    }
    cout<<"\n";
}