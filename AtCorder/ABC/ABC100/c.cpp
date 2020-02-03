#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)
#define REPRE(i,n) for (lint i = N-1; i < 0; i--)
#define REP1RE(i,n) for (lint i = N-1; i < 1; i--)

lint N;
lint a, ans;
vector<lint> A;
// list<lint> A;

int main(void){
    cin >> N;
    for (lint i = 0; i < N; ++i) {
        cin >> a;
        if (((a % 2) == 0)) A.push_back(a);
        // A.push_back(a);
    }

    sort(A.begin(), A.end(), greater<lint>());
    // A.sort(greater<lint>());

    for (auto it = A.begin(); it != A.end(); ++it) {
        while (((*it) % 2) == 0) {
            (*it) /= 2;
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}