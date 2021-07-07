//learning basics of pairs and vectors
//just a program for fun

#include <utility>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,1,1,1,2,2,2,2,2,2,2,22,4,4,44,4,5,5,5,56,6,66,7,7,77,7,8,88,8,88,8,9,9,9,9,0000,00,00,0,0,1};
	vector<pair<int, int>> v;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
	    if(arr[i]==-1)
	        continue;
	    pair<int,int> p(arr[i],1);
	    for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++)
	    {
	        if(arr[i]==arr[j])
	        {
	           p.second++;
	           arr[j]=-1; 
	        }
	        
	    }
	    v.push_back(p);
	}
	for(int i=0;i<v.size();i++)
	{
	    cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
    return 0;
}


