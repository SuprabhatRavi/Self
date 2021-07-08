#include <iostream>
#include<set>
#include<unordered_set>
#include<iterator>


using namespace std;

int main() {
	int arr[]={1,2,3,4,4,4,5,6,6,66,67,7,8,6,6,0,0};
	unordered_set<int> S;
	//set<int> S;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
	    S.insert(arr[i]);
	}
	
	S.erase(S.find(0));
	//S.erase(S.find(0)); and can also do S.erase(S.find(0),S.find(4)); to delete a subset
	
	unordered_set<int>::iterator it;
	for(it=S.begin();it!=S.end();it++)
	{
	    cout<<*it<<" ";
	}
	
	return 0;
}
