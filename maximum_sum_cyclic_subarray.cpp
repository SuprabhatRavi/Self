#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[]={-3,4,6,-2};
	int sum=arr[0],res=arr[0],n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=1;i<n;i++)
	{
	    sum=max(sum+arr[i],arr[i]);
	    res=max(sum,res);
	}
	//cout<<res;
	
	int total=arr[0],res2=-arr[0];
	sum=-arr[0];
	for(int i=1;i<n;i++)
	{
	    total+=arr[i];
	    arr[i]=-arr[i];
	    sum=max(sum+arr[i],arr[i]);
	    res2=max(sum,res2);
	}
	res=max(total+res2,res);
	cout<<res;
	
	return 0;
}
