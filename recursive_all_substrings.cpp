//prints all substrings of the given string recurcively


#include <iostream>
#include<string>
using namespace std;

void fun(string str,string substr="",int n=0)
{
    if(n==str.length())
    {
        cout<<substr<<endl;
        return;
    }
    fun(str,substr+str[n],n+1);
    fun(str,substr,n+1);
}

int main() 
{
	string str="abc";
	fun(str);
	return 0;
}
