#include<bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        int a[n][n];
 
        int l=1;
        int r=n*n;
        int curr=0;
        for(int i=0;i<n;i++)
            {
                if(i%2==0)
                    {
                        for(int j=0;j<n;j++)
                            {
                                if(curr==0){a[i][j]=l;l++;}
                                else{a[i][j]=r;r--;}
                                curr^=1;
                            }
                    }
                else
                    {
                        for(int j=n-1;j>=0;j--)
                            {
                                if(curr==0){a[i][j]=l;l++;}
                                else{a[i][j]=r;r--;}
                                curr^=1;
                            }
                    }
            }
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++){cout<<a[i][j]<<" ";}
                cout<<"\n";
            }
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
