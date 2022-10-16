#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int d;
int count[10] = {0};
int digit(int a)
{
    int cnt = 0;
    while (a)
    {
        if (a % 10 == d)
            cnt++;
        a /= 10;
    }
    return cnt;
}
int main()
{
    int num;
    cin >> num >> d;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += digit(i);
    }
    cout << sum;
}