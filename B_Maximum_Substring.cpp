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
#define TC(t) while (t--)
 
 
long combi(int n,int k)
{
    long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}
int getithbit(int n,int i){
    int mask=(i<<i);
    return n&mask;
 
}
int clearithbit(int n,int i){
    int mask=~(1<<i);
    return n&mask;
}
int setithbit(int n,int i){
    int mask=(1<<i);
    return n|mask;
}
int updateithbit(int &n,int i,int v){
    int mask=(v<<i);
    return n|mask;
}
int computeXOR(int n)//computes xor of all the values till n
{
if (n % 4 == 0)
return n;
if (n % 4 == 1)
return 1;
if (n % 4 == 2)
return n + 1;
else
return 0;
}
int clearlastibits(int n,int i){
    int mask= (-1<<n);
    return (n&mask);
}
int clearrangeofbits(int n,int i,int j){
 int mask=(~0<<j+1)|((1<<i)-1);
 return n&mask;    
}
int replacebits(int n ,int m,int i,int j)
{
    int mask;
    clearrangeofbits(n,i,j);
    (m<n)?mask=m<<i:mask=n<<i;
    return n|mask;
}
//check if its a power of 2
bool powerof2(int n){
    if(n&n-1) return false;
    return true;
}
int countsetbits(int n){
    int count=0;
    while(n>0){
    count+=(n&1);
    n>>=1;
    }
    return count;
}
//hack for the above function
 
int countsetbitshack(int n){
    int ans=0;
    while(n>0){
        n=(n&n-1);
        ans++;
    }
    return ans;
 
} 
//optimised exponentiation code in log(n) time
/*the last set bit is present the log2n +1 positon in  the bit */
int fastexpo(int a,int n){
    int apb=1;
    while(n>0){
        
        if(n&1){//checks if the the ith bit is 1.. if 1 then it'll multiply the value of a.
            apb*=a;
        }
        a*=a;
        n>>=1;
    }
    return apb;
} 
//function to convert a number to its  binary form..
int convertTobinary(int n){
    int ans=0;
    int power=1;
    while(n>0){
        
        ans+=(n&1)*power;
        power*=10;
        n>>=1;
    }
    return ans;
}
int firstOcc(int arr[],int n ,int key){//first occurence function
    if (n==0)return -1;
    if(arr[0]==key)return 0;
    int subindex=firstOcc(arr+1,n-1,key);
    if(subindex!=-1)return subindex+1;
    return -1;
}
//last occurence of a number 
int lastOcc(int arr[],int n,int key){
    if (n==0)return -1;
    int subindex=lastOcc(arr+1,n-1,key);
    if(subindex==-1){
        if (arr[0]==key)return 0;
        else return -1;
    }
    return subindex+1;
} 
int powerOP(int a,int n){//optimiseed powering function.
    if(n==0)return 1;
    int subproblem=powerOP(a,n/2);
    if(n&1)return a*subproblem*subproblem;
    return subproblem*subproblem;
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  LL t;
  cin>>t;
  TC(t){
       int n;
            cin>>n;
           string s;
           cin>>s;
           LL l=0;
           LL r=0;
           vector<LL> v;
          // int n=s.size();
           for(LL i=1;i<n;i++)
            {
                if(s[i]==s[l]){r++;}
                else
                    {
                        v.push_back(r-l+1);
                        l=i;r=i;
                    }
            }
            v.push_back(r-l+1);
   
            LL ans=0;
            for(auto x:v){ans=max(ans,x*x);}
            LL c0=0;
            for(auto x:s)
                {
                    if(x=='0'){c0++;}
                }
            ans=max(ans,c0*(n-c0));
            cout<<ans<<"\n";
  }
  return 0;
}