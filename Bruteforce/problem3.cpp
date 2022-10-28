#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
int count(string s)
{
    int result = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '3' || s[i] == '6' || s[i] == '9')
        {
            result++;
        }
    }
    return result;
}
int main()
{
    string num;
    cin>>num;
    int cnt = 0;
    for(int i=1;i<=stoi(num);i++)
    {
        string check369 = to_string(i);
        cnt += count(check369);
    }   
    cout<<cnt;
}