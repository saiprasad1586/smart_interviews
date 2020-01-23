#include<bits/stdc++.h>
using namespace std;

void primelist(int x){
    long long i=2,j=0;
    while ((i*i)<=x)
    {
        if(x%i!=0)
            i++;
        else{
            x=x/i;
            primell[j]=i;
            j++;
        }
    }
    if(x>1)
        primell[j]=x;
}
int main(){
    long long x,n;
    cin>>x>>n;
    primelist(x);
    long long mod=1e9+7;
    long long ans=1;
    for(int i:primell){
        long long count=0,p=i;
        while(p<=n){
            count+=(n/p);
            p*=i;
        }
        ans=((ans*(pow(pow(i,count),mod))));
        ans%=mod;
    }
    cout<<ans;
}