//intersection of 2 sorted arrays

#include <iostream>
using namespace std;

int main() {
	int arr[]={1,1,3,3,4,6,10};
	int arr1[]={1,5,5,5,6,10,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int m=sizeof(arr1)/sizeof(arr1[0]);
	int i=0,j=0;
	while(i<n && j<m)
	{
	    if(arr[i]==arr1[j])
	    {
	        cout<<arr[i]<<" ";
	        i++;
	        while(arr[i]==arr[i-1])i++;
	        j++;
	        while(arr1[j]==arr1[j-1])j++;
	    }
	    else if(arr[i]<arr1[j])i++;
	    else j++;
	}
	return 0;
}

//Using unordered_set

#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	int arr[]={1,1,3,3,4,6,10};
	int arr1[]={1,5,5,5,6,10,11};
	int n=sizeof(arr)/sizeof(arr[0]), m=sizeof(arr1)/sizeof(arr1[0]);
	unordered_set<int> s;
	
	for(int i=0; i<n; i++){
	    s.insert(arr[i]);
	}
	
	for(int i=0; i<m; i++){
	    if(s.find(arr1[i])!=s.end()){
	        cout<<arr1[i]<<" ";
	        s.erase(arr1[i]);
	    }
	}
	return 0;
}
