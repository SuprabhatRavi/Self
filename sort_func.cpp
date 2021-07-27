//A program to make own comparator of sort()

#include <utility>
#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


bool compare(pair<char,int> p1,pair<char,int> p2)
{
    return p1>p2;
}



int main()
{
    string str="Hellow Everyone! Hope you all are doing well. I'm here on the occasion of random random to deliver a random speech. LET'S GET STARTED!!";
    vector<pair<char,int>> vect;
    for(int i=0;i<str.size();i++)
    {
        if(!((str[i]>'A'==1 && str[i]<'Z'==1) || (str[i]>'a'==1 && str[i]<'b'==1)))
            continue;
        pair<char,int> p(str[i],1);
        for(int j=i+1;j<str.length();j++)
        {
            if(toupper(str[i])==toupper(str[j]))
            {
                p.second++;
                str[j]=' ';
            }
        }
        vect.push_back(p);

    }
    
    sort(vect.begin(),vect.end(),compare);
    
    
    for(int i=0;i<vect.size();i++)
	{
	    cout<<vect[i].first<<" "<<vect[i].second<<"\n";
	}
    return 0;
}
