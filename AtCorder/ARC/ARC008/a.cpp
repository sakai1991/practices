#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint N;

int main(void){
    cin >> N;
    lint ans;
    (N % 10) <= 6 ? ans = ((N % 10) * 15 + (N / 10) * 100) : ans = (((N / 10) + 1) * 100);
    cout << ans << endl;
    return 0;
}