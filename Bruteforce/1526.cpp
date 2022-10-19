#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;

    cin>>str;

    int max = -1;
    for(int i=4;i<=stoi(str);i++)
    {
        int cnt=0;
        string temp = "";
        temp += to_string(i);
        for(int j=0;j<temp.size();j++)
        {
            if(temp[j]=='4' || temp[j]=='7')
            {
                cnt++;
            }

            if(cnt == temp.size())
            {
                if(stoi(temp)>max) max = stoi(temp);
            }
        }
        
    }
    cout<<max<<'\n';
}