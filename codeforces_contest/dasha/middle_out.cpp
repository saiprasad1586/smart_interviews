#include <bits/stdc++.h>
using namespace std;          
int main()
{
	int q;
	cin >> q;	
    while(q--)
    {
        int n;
	    cin >> n;
	    string s,t;
	    cin >> s >> t;    	
        int res = n;	
        for(int i = 0; i < n; i++)
        {
    	    int k = i;
    	    int p = 0;	
    	    while(k < n && p < n)
    	    {
    	        while(p < n && s[p] != t[k])
    			    p++;	
    		    if(p < n)
    		    {
    			    k++;
    			    p++;
    			}
    	    }
    		
    	res = min(res,n+i-k);
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());    	
        if(s != t)
        {
    	    cout << -1 << '\n';
        }
        else
        {
    	    cout << res << '\n';
        }
    }
    return 0;
}