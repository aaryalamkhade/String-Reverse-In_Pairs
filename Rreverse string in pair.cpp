#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter string:";
	getline(cin,s);
	int a;
	cout<<"Enter number:";
	cin>>a;
	stack<char>pal;
	int b;
     b=a;
	for(int i=0;i<s.length();i++)
	{ 
	   if(a!=0)
	   {
	   	  pal.push(s[i]);
	   	  a--;
	   }
	   if(a==0 || (a!=0 && i==s.length()-1))
	   {
	   	a=b;
	   	while(pal.empty()==false)
	     {
		cout<<pal.top();
		pal.pop();
	     }
	   }
	}
	
}
