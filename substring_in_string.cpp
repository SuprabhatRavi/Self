//Iterative 

#include <iostream>
using namespace std;

int main() {
	string str="helloeveryonehowareyou";
	string sub="honey";
	int i=0, j=0;
	while(i<str.length() && j<sub.length()) {
	    if(str[i]==sub[j]) {
	        i++; j++;
	    }
	    else i++;
	}
	
	if(j==sub.length()) {
	    cout<<"Substring exists";
	}
	else cout<<"Substring dosent exist";
	return 0;
}

//Recursive 

#include <iostream>
#include<string>
using namespace std;

bool fun(string str, string sub) {
    if(str=="\0") {
        return 0;
    }
    if(sub=="\0") {
        return 1;
    }
    if(str[0]==sub[0]) {
        return fun(str.substr(1,str.length()), sub.substr(1, sub.length()));
    }
    else return fun(str.substr(1,str.length()), sub);
}

int main() {
	string str="helloeveryonehowareyou";
	string sub="honey";

	if(fun(str,sub)) {
	    cout<<"Substring exists";
	}
	else cout<<"Substring dosent exist";
	return 0;
}