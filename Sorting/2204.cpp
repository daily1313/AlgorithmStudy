#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(!n) break;
        vector<pair<string,int>>v;
        vector<pair<string,int>>v2;

        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(make_pair(s,i));
            for(int i=0;i<s.size();i++)
            {
                if(isupper(s[i]))
                {
                    s[i] = tolower(s[i]);
                }
            }
            v2.push_back(make_pair(s,i));

        }
        sort(v2.begin(),v2.end());
        for(int i=0;i<v.size();i++)
        {
            if(v2[0].second == v[i].second)
            {
                cout<<v[i].first<<'\n';
                break;
            }
        }

        v.clear();
        v2.clear();
    }


}