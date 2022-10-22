#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int digit(int num)
{
    int result = 0;
    while(num)
    {
            result += (num%10);
            num/=10;
        
    }
    return result;
}
int main()
{
    int num;
    cin>>num;
    int cnt =0;
    for(int i=1;i<=num;i++)
    {
        if(!(i % digit(i))) cnt++;
    }
    cout<<cnt<<'\n';
}