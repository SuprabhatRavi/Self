// shows permutations of the given string

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void fun(string str,int i=0)
{
    if(i==str.length()-1)
    {
        cout<<str<<"\n";
        return;
    }
    
    for(int j=i;j<str.length();j++)
    {
        swap(str[i],str[j]);
        fun(str,i+1);
        swap(str[i],str[j]);
    }
}

int main() {
	string str="ABCD";
	fun(str);
	return 0;
}
