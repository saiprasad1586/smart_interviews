#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    int p,q;
    cin>>p;
    int arr[250];
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p;i<p+q;i++){
        cin>>arr[i];
    }
    sort(arr,arr+(p+q));

    for(int i=0;i<p+q;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    if(count==n){
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    
    return 0;
}