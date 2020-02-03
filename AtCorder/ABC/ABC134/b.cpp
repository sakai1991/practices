#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

int main(void){
    int N, D;
    cin >> N >> D;
    int mod = N % ((D*2)+1);
    (mod == 0) ? cout << N / ((D*2)+1) << endl : cout << N / ((D*2)+1) + 1 << endl;
    return 0;
}