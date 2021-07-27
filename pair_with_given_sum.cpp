//Finding a pair with given sum from an array using two pointer approach in a sorted array


#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=16;
    int low=0,high=n-1;
    
    while(low<high)
    {
        if(arr[low]+arr[high]==sum)
        {
            cout<<arr[low]<<" "<<arr[high];
            return 0;
        }
        else if(arr[low]+arr[high]<sum)
                low++;
        else high--;
    }
    cout<<-1;
	return 0;
}


//Pair with given sum using unordered_set 

#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	int arr[]= {1, 3, 10, 6, 8, 5, 7};
	int n=sizeof(arr)/sizeof(arr[0]), item=10;
	unordered_set<int> s;
	
	for(int i=0; i<n; i++){
	    if(s.find(item-arr[i])!=s.end()){
	        cout<<arr[i]<<" "<<item-arr[i];
	        return 0;
	    }
	    else{
	        s.insert(arr[i]);
	    }
	}
	cout<<"Not Found";
	return 0;
}
