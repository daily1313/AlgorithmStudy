#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin,str);

    string result ="";
    for(int i=0;i<str.size();i++) 
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') 
        {
            result += str[i];
            i+=2;
        }
        else
        {
            result += str[i];
        }

    }
    cout<<result;
}