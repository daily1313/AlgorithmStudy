#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int idx = 0;
        int d;
        cin>>d;
    
        
        while(idx+idx*idx<=d)
        {
            idx++;
        }
        idx-=1;
        
        cout<<idx<<'\n';
        
    

    }
}