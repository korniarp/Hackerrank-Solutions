#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			for(int j=i;j<n-1;j++)
			{
				cout<<" ";
			}
			for(int k=0;k<i+1;k++)
			{
				cout<<"#";
			}
			cout<<"\n";
		}
		else
		{
			for(int k=0;k<n;k++)
			{
				cout<<"#";
			}
		}
		
		
	}
}
