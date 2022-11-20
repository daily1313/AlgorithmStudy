#include <iostream>
#include <string>

using namespace std;
bool check = false;
int main()
{
    string str;

    cin>>str;
    if(str.size()==1) 
    {
        cout<<"true"<<'\n';
        return 0;
    }
    else
    {
        for(int i=0;i<str.size()/2;i++) 
        {
            if(str[i] == str[str.size()-1-i]) 
            {
                check = true;    
            }
            else
            {
                check = false;
                break;
            }
        }
    }
    if(!check) 
    {
        cout<<"false"<<'\n';
    } 
    else
    {
        cout<<"true"<<'\n';
    }

}