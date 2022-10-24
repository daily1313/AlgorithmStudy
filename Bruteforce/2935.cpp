#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    char op;
    string a,b;
    vector<char>v;
    v.push_back('1');
    cin>>a>>op>>b;
    
    switch(op)
    {
        case '*' : 
        for(int i=0;i<a.size()+b.size()-2;i++)
        {
            v.push_back('0');
        }
            break;
        case '+' :
        {
            if(a.size()!=b.size())
            {
            int max_len = max(a.size(),b.size());
            int min_len = min(a.size(),b.size());
            for(int i=0;i<max_len-1;i++)
            {
                if(i==max_len-min_len-1)
                {
                    v.push_back('1');
                }
                else
                {
                    v.push_back('0');
                }
            }
            }
            else
            {
                v.pop_back();
                v.push_back('2');
                for(int i=0;i<a.size()-1;i++)
                {
                    v.push_back('0');
                }
            }
            break;
        }
        default : break;
    }
    vector<int>::iterator it;
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<(*it);
    }

}