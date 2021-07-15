//O(log n)
//using binary search method

#include <iostream>
using namespace std;

int main() {
	int arr[]={2,4,8,4,10,11,21,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int low=0,high=n-1,mid;
	
	while(low<=high)
	{
	    mid=(low+high)/2;
	    if((mid==0 || arr[mid-1]<arr[mid]) && (mid==n-1 || arr[mid]>arr[mid+1]))
	    {
	        cout<<mid<<" "<<arr[mid]<<"\n";
	        return 0;
	    }
	    else if(mid==0 || arr[mid+1]>arr[mid])
	    {
	        low=mid+1;
	    }
	    else high=mid-1;
	}
	cout<<-1;
	return 0;
}
