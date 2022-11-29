#include <string>
#include <vector>

using namespace std;

bool checkPlusOperator(char alpha) 
{
    if(alpha == '+') 
    {
        return true;
    }
    return false;
}
bool checkMinusOperator(char alpha) 
{
    if(alpha == '-') 
    {
        return true;
    }
    return false;
}
int solution(string my_string) {
    int answer = 0;
    vector<int>v;
    vector<char>op;
    string number = "";
    for(int i=0;i<my_string.size();i++)
    {
        
        if(checkPlusOperator(my_string[i]))
        {
            op.push_back('+');
            v.push_back(stoi(number));
            number = "";
            continue;
        }
        if(checkMinusOperator(my_string[i]))
        {
            op.push_back('-');
            v.push_back(stoi(number));
            number = "";
            continue;
        }
        if(my_string[i]==' ') 
        {
            continue;
        }
        number += my_string[i];
    }
    v.push_back(stoi(number));
    
    answer += v[0];
    for(int i=1;i<v.size();i++)
    {
        if(op[i-1]=='+') 
        {
            answer+=(v[i]);
        }
        if(op[i-1]=='-') 
        {
            answer-=(v[i]);
        }
        
    }
    
    return answer;
}