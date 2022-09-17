#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<2*n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    vector<int>result;
    for(int i=0;i<n;i++)
    {
        result.push_back(v[i]+v[2*n-(i+1)]);
    }
    sort(result.begin(),result.end());
    cout<<result[0];
}