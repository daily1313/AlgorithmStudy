#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main () 
{
    map<int, int> m;
    vector<int>v;
    for(int i=1;i<=30;i++) 
    {
        ++m[i];
    }
    for(int i=0;i<28;i++) 
    {
        int a;
        cin>>a;
        if(m[a]) --m[a];
    }
    int num;
    for(int i=1;i<=30;i++) 
    {
        if(m[i]) 
        {
            num = i;
            v.push_back(num);
        }     
    }
    cout<<v[0]<<'\n';
    cout<<v[1];
    
}