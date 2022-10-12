#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int score;
    int time = 10;
    int sum = 0;
    vector<int>v;
    while(time--)
    {
        cin>>score;
        v.push_back(score);
    }
    for(int i=0;i<v.size();i++)
    {
        sum += v[i];
        if(sum>=100)
        {
            if(sum - 100 <= 100 - (sum - v[i]))
            {
                cout<<sum<<'\n';
                return 0;
            }
            else
            {
                cout<<sum - v[i]<<'\n';
                return 0;
            }
        }
    }
    cout<<sum<<'\n';
}