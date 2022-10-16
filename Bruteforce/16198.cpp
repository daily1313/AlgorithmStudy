#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int ans = -1;
void go(vector<int> v, int sum) {
    if (v.size() == 2) {
        ans = max(ans, sum);
        return;
    }
    for (int i = 1; i < v.size() - 1; i++) {
        vector<int> result = v; //
        result.erase(result.begin()+i); // i번째 원소 제거
        go(result, sum + (v[i - 1] * v[i + 1]));
        // 에너지의 합을 구하면서 result 벡터를 넘겨준다.
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    go(v, 0);
    cout << ans << '\n';
    return 0;
}