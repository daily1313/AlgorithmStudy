#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, start_m, max_M, T, R;
    // 운동하는 시간, 초기 맥박, 최대 맥박, 추가된 맥박, 감소된 맥박

    cin>>N>>start_m>>max_M>>T>>R;

    int min = start_m;
    if(max_M-start_m<T)
    {
        cout<<-1<<'\n';
    }
    else
    {
            int time=0;
            while(N)
            {
                if(start_m+T<=max_M)
                {
                    start_m += T;
                    N--;
                    time++;
                }
                else
                {
                    if(start_m - R <= min) start_m = min;
                    else start_m -= R;
                    
                    time++;
                }
            }

            cout<<time<<'\n';

    }
    



}