#include<bits/stdc++.h>
using namespace std;
const long long m=1e9+7;
int main(){
    int h, w;
    cin >> h >> w;
    vector<int> r(h);
    vector<int> c(w);
    for(int i = 0; i < h; ++i)
        cin >> r[i];
    for(int i = 0; i < w; ++i)
        cin >> c[i];
    long long ans = 1;
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++) {
            if((r[i] > j && c[j] == i) || (r[i] == j && c[j] > i)){
                ans = 0;
                break;
            }
            if (r[i] < j && c[j] < i)
                ans = (ans*2) % m;
        }
    cout<<ans;
    return 0;
}