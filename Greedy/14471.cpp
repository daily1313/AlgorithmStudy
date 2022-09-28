#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <utility>
using namespace std;
bool cmp(pair<int, int> p1, pair<int,int> p2)
{
    return p1.first > p2.first;
}
int main()
{
    int N,M;
    cin>>N>>M;
    vector<pair<int,int>>v;
    for(int i=0;i<M;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    
    int result = 0;
    int count = 0;
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<M;i++)
    {
        if(result == M-1) break;

        if(v[i].first >= N) result++;
        else 
        {
            count += (N - v[i].first);
            result++;
        }
    }
    cout<<count;


}
