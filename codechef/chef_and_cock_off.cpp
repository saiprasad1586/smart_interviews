#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int x,sum=0;
        for (int i = 0; i < 5; i++)
        {
            cin>>x;
            sum+=x;
        }
        switch (sum)
        {
        case 0:
            cout<<"Beginner"<<endl;
            break;
        case 1:
            cout<<"Junior Developer"<<endl;
            break;
        case 2:
            cout<<"Middle Developer"<<endl;
            break;
        case 3:
            cout<<"Senior Developer"<<endl;
            break;
        case 4:
            cout<<"Hacker"<<endl;
            break;
        case 5:
            cout<<"Jeff Dean"<<endl;
            break;
        default:
            break;
        }
    }
    return 0;
    
}