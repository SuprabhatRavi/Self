#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	int arr[]= {1, 2, -3, 4, -4, 8, 6};
	int n=sizeof(arr)/sizeof(arr[0]), item=5, psum=0;
	unordered_set<int> s;
	
	for(int i=0; i<n; i++) {
	    psum+=arr[i];
	    if(s.find(psum-item)!= s.end()) {
	        cout<<"Substring with the given sum found";
	        return 0;
	    }
	    else {
	        s.insert(psum);
	    }
	}
	cout<<"Substring with the given sum not found";
	return 0;
}