#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
#include <cstring>
#include <string.h>


using namespace std;
int result = 0;
bool num[1000];
bool sameandzerocheck(string s)
{
    if(s[0]==s[1] || (s[0]==s[2]) || (s[1]==s[2])) 
    {
        return false;
    }
    else if( s[0] =='0' || s[1] =='0' || s[2] == '0')
    {
        return false;
    }
    else return true;
}

int main()
{
    int n;
    cin>>n;
    vector<tuple<string,int,int>>v;
    memset(num,true,sizeof(num));
    string number; 
    int strike, ball;
    for(int i=0;i<n;i++)
    {
        cin>>number>>strike>>ball;
        if(sameandzerocheck(number))
        {
            v.push_back(make_tuple(number, strike, ball));
        }

    }
    for(int i=0;i<v.size();i++)
    {
        string cmp = get<0>(v[i]);
        int cmpstrike = get<1>(v[i]);
        int cmpball = get<2>(v[i]);
        
        for(int j=123;j<=999;j++)
        {
            int strikecnt = 0;
            int ballcnt = 0;
            string st = to_string(j);
            if(sameandzerocheck(st))
            {
                for(int a=0;a<3;a++)
                {
                    for(int b=0;b<3;b++)
                    {
                        if(a==b && st[a] == cmp[b])
                        {
                            strikecnt++;
                        } 
                        if(a!=b && st[a] == cmp[b])
                        {
                            ballcnt++;
                        }
                    }
                }
                if((cmpstrike != strikecnt) || (cmpball != ballcnt))
                {
                    num[j] = false;
                }
            }
        }
    }
    for(int i=123;i<=999;i++)
    {
        
        if(sameandzerocheck(to_string(i)) && num[i]==true) result++;
    }
    
    cout<<result<<'\n';

}