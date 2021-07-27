#include <iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.first<p2.first)
    {
        return 1;
    }
    return 0;
}

int main() {
	pair<int,int> arr[]={{1,3},{2,5},{6,8},{3,6}};
	vector<pair<int,int>> vect;
	
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n,cmp);
	vect.push_back(arr[0]);
	
	int i=1,j=0;
	while(i<n)
	{
	    
	    if(vect[j].second >  arr[i].first)
	    {
	        pair<int,int> p(vect[j].first,max(vect[j].second,arr[i].second));
	        vect[j]=p;i++;
	    }
	    else 
	    {
	        vect.push_back(arr[i++]);j++;
	    }
	}
	for(auto a: vect) cout<<a.first<<" "<<a.second<<"\n";
	
	return 0;
}
