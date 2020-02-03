#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint H;

int main(void){
    cin >> H;

    lint m = 0;
    while ((H / 2) != 0) {
        ++m;
        H /= 2;
    }

    lint ans = 1;
    REP (i, m+1) {
        ans *= 2;
    }
    cout << ans - 1 << endl;
    return 0;
}