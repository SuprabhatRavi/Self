#include <iostream>
using namespace std;

int main() {
	unsigned int n=100000000;
	unsigned int low=0,high=n/2,mid;
	
	if(n==1)
	{
	    cout<<1;
	    return 0;
	}
	
	while(low<=high)
	{
	    mid=(low+high)/2;
	    
	    if(mid*mid==n)
	   {
	       cout<<mid;
	       break;
	   }
	   else if(mid*mid>n)
	   {
	       high=mid-1;
	   }
	   else 
	   {
	       if((mid+1)*(1+mid)>n)
	       {
	           cout<<mid;
	           break;
	       }
	       else low=mid+1;
	   }
	}
	return 0;
}
