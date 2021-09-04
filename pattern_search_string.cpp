#include <iostream>
using namespace std;

int main() {
	string str="geeksforgeeks";
	string m="eks";
	
	for(int i=0; i<=str.length()-m.length(); i++) {
	    int j=0;
	    if(str[i]==m[j]) {
	        int temp= i;
	        while(str[temp++]== m[j++] && j<m.length());
	        
	        if(j==m.size()) {
	            cout<<i<<" ";
	        }
	    }
	    
	}
	return 0;
}