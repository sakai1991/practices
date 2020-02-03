#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

int main(void){
    lint N;
    cin >> N;
    vector<lint> A(N);
    REP (i, N) cin >> A[i];
    vector<lint> B = A;
    sort(B.begin(), B.end());

    for (int i = 0; i < N; ++i) {
        lint ans = 0;
        if (A[i] != B[N-1]) {
            cout << B[N-1] << endl;
        } else {
            cout << B[N-2] << endl;
        }
    }
    return 0;
}