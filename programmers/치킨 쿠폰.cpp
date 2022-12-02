#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int chickencoupon;
    int bonus;
    while(chicken/10)
    {
        chickencoupon = (chicken / 10);
        answer += chickencoupon;
        chicken=(chicken/10+chicken%10);
    }
    
    return answer;
}