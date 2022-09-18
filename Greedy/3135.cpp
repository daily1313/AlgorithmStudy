#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    int n;
    cin>>a>>b>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        res.push_back(abs(v[i]-b));
    }    
    sort(res.begin(),res.end());

    if(res[0]>=abs(a-b))
    {
        cout<<abs(a-b)<<'\n';
    }
    else
    {
        cout<<1+res[0]<<'\n';
    }
    
}
