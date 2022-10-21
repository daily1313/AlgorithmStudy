#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>

using namespace std;
bool cmp(pair<int,int>&p1, pair<int,int>&p2)
{
    if(p1.second == p2.second) return p1.first<p2.first;
    else return p1.second > p2.second;
}
int main()
{
    vector<pair<int, int>>v;
    int l[21];
    int j[21];
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>l[i];
    }
    for(int i=0;i<N;i++)
    {
        cin>>j[i];
    }
    for(int i=0;i<N;i++)
    {
        v.push_back(make_pair(l[i],j[i]));
    }
    sort(v.begin(),v.end(),cmp);
    
    int max = -1;
    for(int i=0;i<N;i++)
    {
        int start = 100;
        int happy = 0;
        for(int j=i;j<N;j++)
        {
            if(v[j].first >=100) continue;

            if(start-v[j].first>0)
            {
                start-=v[j].first;
                happy+=v[j].second;
            }
            else
            {
                continue;
            }
        }
        if(happy>max) max = happy;
    }
    cout<<max<<'\n';

}