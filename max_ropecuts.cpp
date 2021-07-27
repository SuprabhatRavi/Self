// need to cut a rope completery into subropes of given sizes. If possible display number of sub-ropes that can be made.if not display -1

#include <iostream>
#include<algorithm>
using namespace std;

int fun(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res= (max(fun(n-a,a,b,c),max(fun(n-b,a,b,c),fun(n-c,a,b,c))));
    if(res==-1)
    {
        return -1;
    }
    return res+1;
    
}

int main() {
	int n=9;
	int a=2,b=2,c=2;
	cout<<fun(n,a,b,c);
	return 0;
}
