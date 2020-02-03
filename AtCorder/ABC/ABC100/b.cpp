#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)
#define REPRE(i,n) for (lint i = N-1; i < 0; i--)
#define REP1RE(i,n) for (lint i = N-1; i < 1; i--)

lint N;
lint sub_num = 100;
lint D;
lint top_num;

int main(void){
    cin >> D >> N;
    top_num = pow(sub_num, D);
    if (N <= 99) cout << top_num * N << endl;
    else if (N == 100) cout << top_num * (N+1) << endl;
    return 0;
}