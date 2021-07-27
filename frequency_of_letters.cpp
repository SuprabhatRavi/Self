//learning basic of vector and pair
//just for fun proram
//counts frequency of alphabets occuring

#include <utility>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

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
    for(int i=0;i<vect.size();i++)
	{
	    cout<<vect[i].first<<" "<<vect[i].second<<"\n";
	}
    return 0;
}
