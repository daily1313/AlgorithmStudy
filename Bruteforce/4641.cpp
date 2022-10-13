#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>v;
    while(1)
    {
        int num;
        cin>>num;
        int cnt=0;
        if(num==-1) break;
        if(num==0) 
        {
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            {
                if(binary_search(v.begin(),v.end(),v[i]*2))
                {
                    cnt++;
                }
            }
            cout<<cnt<<'\n';
            v.clear();
        }
        else v.push_back(num);
        
        
        
        
        
        
        
    }
}