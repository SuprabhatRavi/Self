//displays all combinations of the given string

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() 
{
	string str="abcdefg";
	for(int i=0;i<pow(2,str.length());i++)
	{
	    for(int j=0;j<str.length();j++)
	    {
	        if(i&1<<j)
	            cout<<str[j];
	    }
	    cout<<"\n";
	}
	return 0;
}
