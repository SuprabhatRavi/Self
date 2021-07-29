#include <iostream>
#include<unordered_map>
#include<iterator>
using namespace std;

int main() {
    int arr[]={1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n=sizeof(arr)/sizeof(arr[0]), psum=0, res=-1;
    unordered_map<int,int> m;
     for(int i=0; i<n; i++) {
         if(arr[i]) {
             psum+=1;
             if(m.find(psum)!=m.end()) {
                 res=max(res, i-m[psum] );
             }
             else
             m[psum]=i;
         }
         else {
             psum+=-1;
             if(m.find(psum)!=m.end()) {
                 res=max(res, i-m[psum] );
             }
             else
             m[psum]=i;
         }
         if(psum==0) res= i+1;
     }
     cout<<res;
	return 0;
}