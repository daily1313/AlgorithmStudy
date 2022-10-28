#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string str;

    cin>>str;

    vector<char>v;

    for(int i=0;i<str.size();i++)
    {
        v.push_back(str[i]);
    }
    int len = str.size();
    while(len--)
    {
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1])
            {
                v.erase(v.begin()+i);
                v.erase(v.begin()+i-1);
            }
        }
    }
    
    if(v.empty()) cout<<"";
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<(*it);
    }


}