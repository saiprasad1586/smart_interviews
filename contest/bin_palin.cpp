#include<bits/stdc++.h>
using namespace std;
int a,b,c,T,n;
int main()
{
	cin>>T;
	while(T--)
	{
		a=b=c=0;
		string s;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			for(int j=0;j<s.size();j++)
			{
				if(s[j]=='0')
					a++;
				else
					b++;
			}
			c+=s.size()%2;
		}
		if(c%2)
		{
			if((a%2+b%2)%2==1)
				cout<<n<<endl;
			else
				cout<<n-1<<endl;
		}
		else
		{
			if((a%2+b%2)%2==1||(a%2+b%2)>c)
				cout<<n-1<<endl;
			else
				cout<<n<<endl;
		}
	}
	return 0;
}