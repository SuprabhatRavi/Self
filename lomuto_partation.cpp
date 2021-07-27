//Not stable
//Works in O(n)

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[] = {70, 60, 80, 40, 30};
	int n=sizeof(arr)/sizeof(arr[0]);
	int l=0, h=arr[n], p=n-1, mid=l;
	
	for (int i=0;i<n;i++)
	{
	    if(arr[i]<arr[p])
	    {
	        swap(arr[mid++],arr[i]);
	    }
	}
	
	swap(arr[mid],arr[p]);
	
	for(int a: arr)
	    cout<<a<<" ";
}
