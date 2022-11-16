#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string number;
    int n;
    vector<int>v;
    int start = 3;
    while(start--)
    {
        cin>>n;
        number = to_string(n);
        
        if(number.size()!=8) break;
        
        int count = 1;
        for(int i=1;i<=7;i++) {
            if(number[i]==number[i-1]) {
                count++;
            }
            else 
            {
                v.push_back(count);
                count = 1;
                continue;
            }
        }
        if(count==8)
        {
            v.push_back(count);
        }
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[0]<<'\n';
        v.clear();

    }
}