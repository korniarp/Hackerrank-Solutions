#include<bits/stdc++.h>
using namespace std;

int toys(vector<int> w) 
{
    int f=1;
    int weight=w[0];
    sort(w.begin(),w.end());
    for(int i=0;i<w.size();i++)
    {
    	if(w[i]>weight+4)
    	{
    		f++;
    		weight=w[i];
		}
	}
    
    return f;
}
int main()
{
	
	long n,ans;
	cin>>n;
	vector<int>w(n);
	for(int i=0;i<w.size();i++)
	{
		cin>>w[i];
	}
	ans=toys(w);
	cout<<ans;
	return 0;
}
