#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;
bool ischeckcomma(char alpha) 
{
    if(alpha == ',') return true;
    return false;
}

int main() 
{
    string input;
    int result = 0;
    string status;
    while(getline(cin,input))
    {
        for(int i=0;i<input.size();i++) 
        {
            if(!ischeckcomma(input[i]))
            {
                status += input[i];
            }
            else
            {
                result += stoi(status);
                status = "";
            }
        }
    }
    result += stoi(status);
    cout<<result<<'\n';    
    
}