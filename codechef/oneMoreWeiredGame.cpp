#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int tot=((n-1)+(m-1)+((n-1)*(m-1)*2));
        cout<<tot<<endl;
    }
    
}