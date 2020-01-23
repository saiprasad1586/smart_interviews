#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count[26]={0},bcount[26];
        char s[666];
        cin>>s;
		for(int i=0;i<strlen(s);i++)
		{
			count[s[i]-'a']=1;
		}
		for(int i=0;i<26;i++)
		 if(count[i])
		 {
		 	bcount[i]=1;
		 	for(int j=0;j<strlen(s);j++)
		 	{
		 		if(s[j]==i+'a')
		 		{
		 			if(s[j]!=s[j+1])
					 {
					 	bcount[i]=0;
					 	break;
					 }
					else 
                        j++;
				}
			}
        }
        for(int i=0;i<26;i++)
		    if(count[i]&&bcount[i]==0)
                cout<<char(i+'a');
		cout<<endl;
    }
}