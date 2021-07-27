//Finding unique elements using unordered set

#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	int arr[]= {1, 2, 3, 3, 4, 5, 6, 6, 7};
	int n= sizeof(arr)/sizeof(arr[0]);
	unordered_set<int> s;
	
	for(int i=0; i<n; i++){
	    s.insert(arr[i]);
	}
	
	cout<<s.size();
	
	return 0;
}

//better code

#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	int arr[]= {1, 2, 3, 3, 4, 5, 6, 6, 7};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	unordered_set<int> s(arr, arr+n);

	cout<<s.size();
	return 0;
}
