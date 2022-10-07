#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result = 2015; // "A" ~ "Z" 아스키코드값의 합
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<char>v;
    for(int i=0;i<alpha.size();i++)
    {
        v.push_back(alpha[i]);
    }
    sort(v.begin(),v.end());
    while(n--)
    {
        int sum = 0;
        string str;
        cin>>str;
        vector<char>v2;
        
        for(int i=0;i<str.size();i++)
        {
            v2.push_back(str[i]);
        }
        sort(v2.begin(),v2.end());
        v2.erase(unique(v2.begin(),v2.end()),v2.end());
        for(int i=0;i<v2.size();i++)
        {
            if(binary_search(v.begin(),v.end(),v2[i]))
            sum+=int(v2[i]);
        }
        cout<<result - sum<<'\n';
        v2.clear();
    }

}