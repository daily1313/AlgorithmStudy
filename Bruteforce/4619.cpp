#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b,n;

    while(1)
    {
        
            cin>>b>>n;
            int result = 1;
            if(b==0 && n==0) break;
            for(int i=1;;i++)
            {
            
                    if(pow(i,n)- b >= b - pow(i-1,n))
                    {
                        result = i-1;
                    }
                    else 
                    {
                        result = i;
                    }

                    if(pow(i,n)>b)
                    {
                        break;
                    }
                    

            }
            cout<<result<<'\n';

    }
}
