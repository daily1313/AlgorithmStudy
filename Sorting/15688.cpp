#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int,int>m;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ++m[a];
    }

    for(int i=-1000000;i<=1000000;i++)
    {
        while(m[i]>0) {
            cout<<i<<'\n';
            m[i]--;
        }
    }
}