#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint distance(lint a, lint b) {
    return (a - 1) + (b - 1);
}

int main(void){
    lint N;
    cin >> N;

    lint a, b;
    vector<lint> dp;
    dp.push_back(pow(10, 12));
    for (lint i = 1; (i*i) <= N; ++i) {
        if ((N % i) == 0) {
            a = i;
            b = N / i;
            // cout << "a = " << a << ", b = " << b << endl;
            dp.push_back(min(distance(a, b), *(dp.end() - 1)));
        }
    }

    cout << *(dp.end() - 1) << endl;
    return 0;
}