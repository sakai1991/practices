#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)
#define REPRE(i,n) for (lint i = N-1; i < 0; i--)
#define REP1RE(i,n) for (lint i = N-1; i < 1; i--)


int main(void){
    // input
    lint N;
    cin >> N;
    vector<lint> X(N),Y;
    REP (i, N) cin >> X[i];
    Y = X;
    sort(Y.begin(), Y.end());

    // output
    REP (i, N) {
        if (X[i] < Y[(N / 2)]) {
            cout << Y[(N / 2)];
        } else {
            cout << Y[(N / 2) - 1];
        }
        cout << endl;
    }
    return 0;
}