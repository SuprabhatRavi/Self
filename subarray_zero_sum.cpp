#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[]={1, 2, -3, 4, -4, 8, 6};
    int n=sizeof(arr)/sizeof(arr[0]), psum=0;

    unordered_set<int> s;

    for(int i=0;i<n;i++) {
        psum+=arr[i];
        if(s.find(psum)!= s.end()) {
            cout<<"Subarray with sum 0 exists";
            return 0;
        }       
    }
    cout<<"Subarray with sum 0 exists";
    return 0;
}