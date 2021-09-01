#include <stack>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3],b[3];
	int a1=0,b1=0;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
		
	}

	for(int i=0;i<3;i++)
	{
	
		cin>>b[i];
		
	}

	for(int i=0;i<3;i++)
	{
		if(a[i]<b[i])
		{
			b1++;
		}
		else if(a[i]>b[i])
		{
			a1++;
		}
	
	}
	
	 cout <<a1<<" "<<b1;
  
	return 0;
}
