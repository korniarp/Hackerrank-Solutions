#include<bits/stdc++.h>
#include<vector>
using namespace std;
int gcd_eff(int a1,int b1)
{
	if(b1==0)
    {
        return a1;
    }
    else
    {
        return gcd_eff(b1,a1%b1);
    }
}
int find_lcm(vector<int>a,int x)
{
	int lcm = a[0];
	for(int i=1;i<x;i++)
	{
		lcm = (lcm*a[i])/(gcd_eff(lcm,a[i]));
	}
	return lcm;
}

int main()
{
	
	int x=0,y=0,gcd=0,f=0,lcm=0;
	cin>>x>>y;
	vector<int>a(x); 
	vector<int>b(y);
	for(int i=0;i<x;i++)
	{
					
		cin>>a[i];
	}
	gcd=b[0];	
	for(int i=0;i<y;i++)
	{
	
		cin>>b[i];
	}
		lcm=find_lcm(a,x);
		for(int i=0;i<y;i++)
		{
			gcd = gcd_eff(gcd,b[i]);
			if(gcd==1)
				break;
		}
		//cout<<"ans :"<<gcd;
		for(int i=1;i<=gcd;i++)
		{
			if(gcd%(lcm*i)==0)
			{
				f++;
			}
		}
		cout<<f;
		
		
	return 0;
}


