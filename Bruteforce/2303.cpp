#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
using namespace std;
int idx = 1;
bool cmp(pair<int,int>&p1, pair<int,int>&p2)
{
    if(p1.first==p2.first) return p1.second > p2.second;
    else return p1.first > p2.first;
}
int main()
{
    int n;
    vector<int>v;
    vector<pair<int,int>>v2;
    cin>>n;
    while(n--)
    {
        for(int i=0;i<5;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int start = (v[0] + v[1] + v[2])%10;
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<4;j++)
            {
                for(int k=j+1;k<5;k++)
                {
                    if((v[i]+v[j]+v[k])%10>start)
                    {
                        start = (v[i] + v[j] + v[k])%10;
                    }
                }
            }
        }
        v2.push_back(make_pair(start,idx));
        idx++;
        v.clear();
    }
    sort(v2.begin(),v2.end(),cmp);
    cout<<v2[0].second<<'\n';

}