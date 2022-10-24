#include <iostream>
#include <algorithm>

using namespace std;
int dp[50001];
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i*i<=n;i++)
    {
        dp[i*i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        dp[i] = 1 + dp[i-1];
        for(int j=2;j*j<=i;j++)
        {
            dp[i] = min(dp[i],1 + dp[i-j*j]);
        }
    }
    cout<<dp[n];
}