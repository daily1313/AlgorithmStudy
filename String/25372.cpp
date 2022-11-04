#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   string str;

    int n;
    cin>>n;
    for(int i=0;i<n;i++) 
    while(n--)
    {
        cin>>str;
        if(str.size()>=6 && str.size()<=9) 
        {
            cout<<"yes"<<'\n';
        }
        else
        {
            cout<<"no"<<'\n';
        }
    }
    
}