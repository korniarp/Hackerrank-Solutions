#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int year;
	cin>>year;
	string s;
    stringstream ss;
    ss<<year;
    string str = ss.str();
    if(year==1918)
    {
         s="26.09."+str;
    }
    else if(year<=1917)
    {
        if(year %4 ==0)
        {
             s="12.09."+str;
        }
        else
        {
             s="13.09."+str;
        }
    }
    else
    {
        if((year%400 == 0) || (year%4==0 && year%100!=0) )
        {
             s="12.09."+str;
        }
        else
        {
             s="13.09."+str;
        }
    }
    cout<<s;
}
