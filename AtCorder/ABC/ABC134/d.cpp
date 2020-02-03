#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint N, M = 0;

// x の倍数の箱に入ったボールの数をカウント
lint boalCount(lint x, vector<lint>* v) {
    lint boal = 0;
    for (int i = 1; (i*x) <= N; ++i) {
        // cout << (*v).at(i*x);
        boal += (*v).at(i*x);
    }
    return boal;
}

int main(void){
    cin >> N;
    vector<lint> A(N+1),ans;
    vector<lint> flag(N+1);
    for (lint i = 1; i <= N; ++i) cin >> A[i];  // A[] = {1, 2, 3,... ,N}

    for (lint i = N; i >= 1; --i) {
        lint boal = boalCount(i, &A); // i の倍数の箱にすでに入っているボールの総数
        cout << "Sum of boal = " << boal << ", A[i] = " << A[i] << endl;
        if ( ( (boal % 2) != A[i] ) ) {
            A[i] += 1;
            ans.push_back(i);
            ++M;
        // } else {
        //     flag[i] = 0;
        }
    }

    if (ans.size() != 0) {
        cout << M << endl;
        for (auto a : ans) {
            cout << a;
        }
    } else {
        cout << M;
    }
    cout << endl;
    return 0;
}