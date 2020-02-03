#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint N, K;
vector<lint> H;

int main(void){
    cin >> N >> K;

    REP (i, N){
        lint h;
        cin >> h;
        H.push_back(h);
    }

    if (N <= K) {
        cout << 0 << endl;
        return 0;
    }

    sort(H.begin(), H.end());
    auto end_it = H.end();
    REP (i, K) {
        --end_it;
    }

    lint ans = 0;
    for (auto it = H.begin(); it != end_it; ++it) {
        ans += *it;
    }
    cout << ans << endl;
    return 0;
}