//rotated array


#include <iostream>
using namespace std;

int main() {
	int arr[]={100,200,300,400,1,10,20};
	int mid,low=0,high=sizeof(arr)/sizeof(arr[0]);
	int item=1;
	
	while(low<=high)
	{
	    mid=(low+high)/2;
	    if(arr[mid]==item)
	    {
	        cout<<mid;
	        return 0;
	    }
	    else if(arr[mid]>low)
	    {
	        if(item<arr[mid] && item>=arr[low])
	        {
	            high=mid-1;
	        }
	        else low=mid+1;
	    }
	    else 
	    {
	        if(item<=arr[high] && item>arr[mid])
	        {
	            low=mid+1;
	        }
	        else high=mid-1;
	    }
	}
	return 0;
}
