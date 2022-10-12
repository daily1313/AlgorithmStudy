#include <algorithm>
#include <iostream>
#include <vector>
#include <tuple>
#include <utility>
#include <cmath>

using namespace std;

bool cmp(tuple<int,int,double>&t1, tuple<int,int,double>&t2)
{
    if(get<2>(t1)==get<2>(t2))
    {
        return get<0>(t1) < get<0>(t2);
    }
    else
    {
        return get<2>(t1) < get<2>(t2);

    }

}
int main()
{
    int input_h,input_w;
    cin>>input_h>>input_w;
    double input_l =sqrt(pow(input_h,2)+pow(input_w,2));
    vector<tuple<int,int,double>>v;
    while(1)
    {
        int h,w;
        cin>>h>>w;
        if(!h && !w) break;
        double l = sqrt(pow(h,2)+pow(w,2));
        if(l>input_l || (l==input_l && h>input_h))
        {
            v.push_back(make_tuple(h,w,l));
        }
        else
        {
            continue;
        }
        
    }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++)
        {
            cout<<get<0>(v[i])<<' '<<get<1>(v[i])<<'\n';
        }
}