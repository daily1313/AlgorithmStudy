#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int money;
    cin>>money;
    vector<int>v;

    int divmoney[8] = {50000,10000,5000,1000,500,100,50,10};
    for(int i=0;i<8;i++)
    {
        v.push_back(money/divmoney[i]);
        money %= divmoney[i];
    }
    v.push_back(money);
    
    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<' ';
    }
    
    
}