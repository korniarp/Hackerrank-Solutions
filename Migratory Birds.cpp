#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int maxType = 0;
	int maxFreq = 0;
	int min=0;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}  

	vector<int>freq(n);

	for(int i=0;i<n;i++)
	{
		int index = a[i];
		freq[index]++;
	}

	maxFreq = *max_element(freq.begin(), freq.end());
	maxType =  max_element(freq.begin(), freq.end())- freq.begin();
	cout<<maxType;

	
	return 0;
}
