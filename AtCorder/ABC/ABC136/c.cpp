#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint N;

int canAlinement(vector<lint>* v) {
    map<int, int> hash;
    for (int j = N-1; j > 0; --j) {
        if ((*v).at(j) - (*v).at(j-1) <= (-2)) {
            return 0;
        } else if ((*v).at(j) - (*v).at(j-1) == (-1)) {
            --(*v).at(j-1);
        }
    }
    return 1;
}

int main(void){
    cin >> N;
    vector<lint> H(N);

    REP (i, N) cin >> H[i];
    canAlinement(&H) ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}