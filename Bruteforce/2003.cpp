#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    int sum =0;
    int start = 0;
    int end = 0;
    while(1)
    {
        if(sum>m) sum -= v[start++];
        else if(end == n) break;
        else sum += v[end++];

        if(sum==m) cnt++;
    }
    cout<<cnt<<'\n';
}