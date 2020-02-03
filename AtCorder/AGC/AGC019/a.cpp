#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint Q, H, S, D;
lint N, ans;

int main(void){
    // input
    cin >> Q >> H >> S >> D;
    cin >> N;
    while (N > 0) {
        if (N >= 2) {
            ans += (N / 2) * min({8*Q, 4*H, 2*S, D});
            N = N % 2;
        } else {
            N -= 1;
            ans += min({4*Q, 2*H, S});
        }
    }
    cout << ans << endl;
    return 0;
}