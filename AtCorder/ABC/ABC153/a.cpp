#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint H, N;
vector<lint> A;

int main(void){
    cin >> H >> N;
    REP (i, N ){
        lint a;
        cin >> a;
        A.push_back(a);
    }
    cout << "koko";
    lint dmg_sum = accumulate(A.begin(), A.end(), 0);
    (dmg_sum >= H) ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}