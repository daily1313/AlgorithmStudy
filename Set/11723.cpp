#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

set<int>s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M;
    cin>>M;
    while(M--)
    {
        string str;
        int num;
        cin>>str;
        if(str == "add")
        {
            cin>>num;
            s.insert(num);
        }
        else if(str == "check")
        {
            cin>>num;
            set<int>:: iterator iter = s.find(num);
            if(iter != s.end())
            {
                cout<<1<<'\n';
            }
            else
            {
                cout<<0<<'\n';
            }
        }
        else if(str == "remove")
        {
            cin>>num;
            s.erase(num);
        }
        else if(str == "toggle")
        {
            cin>>num;
            set<int>:: iterator iter = s.find(num);
            if(iter != s.end())
            {
                s.erase(num);
            }
            else
            {
                s.insert(num);    
            }
        }
        else if(str == "all")
        {
            
            for(int i=1;i<=20;i++)
            {
                s.insert(i);
            }
        }
        else if(str == "empty")
        {
            s.clear();
        }
    }
    //clear의 복잡도 O(n) => 시간초과
}