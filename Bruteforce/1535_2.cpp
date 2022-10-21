#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> strength;
vector<int> happy;
int n; 
int max_pleasure = 0;

void solve(int idx, int strong, int pleasure) {
    
    if(strong<=0 || idx >= n) 
    {
        if(max_pleasure < pleasure) 
        {
            max_pleasure = pleasure;
        }
        return;
    }
    //체력이 0이하가 되거나, 모든 경우를 다 조사한 경우
    
    //인사를 한 경우(체력 소모, 행복 얻음), 인사를 하지 않은 경우
    //백트래킹 기법(완전 탐색)
    solve(idx+1,strong - strength[idx], pleasure + happy[idx]);
    solve(idx+1,strong, pleasure);
}

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        strength.push_back(x);
    }
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        happy.push_back(x);
    }
    //시작 부분 : 횟수 0, 체력 100, 기쁨 0
    solve(0,100,0);
    
    cout << max_pleasure << endl;
    
}