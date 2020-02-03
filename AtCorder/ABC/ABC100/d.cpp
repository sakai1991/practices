#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)
#define REPRE(i,n) for (lint i = N-1; i < 0; i--)
#define REP1RE(i,n) for (lint i = N-1; i < 1; i--)

lint N, M;
lint ans = 0;

int main(void){
    vector<lint> x, y, z;
    cin >> N >> M;
    lint dis[N][N];
    vector<lint> ans;
    x.resize(N);
    y.resize(N);
    z.resize(N);
    REP (i, N) {
        cin >> x[i] >> y[i] >> z[i];
    }
    REP (i, N) {
        REP (j, N) {
            REP (k, N) {
                if ((i != j) && (j != k) && (i != k)) {
                    ans.push_back(abs(x[i]+x[j]+x[k]) + abs(y[i]+y[j]+y[k]) + abs(z[i]+z[j]+z[k]));
                }
            }
        }
    }

    cout << *max_element(ans.begin(), ans.end()) << endl;
    return 0;
}