#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint H, N;
vector<lint> A, B;
vector<double> E;
 
int main(void){
    cin >> H >> N;
    REP (i, N) {
        lint a, b;
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
        E.push_back(a/b);
    }
    
    lint syohi_sum = 0;
    lint H_tmp = H;
    while (H_tmp != 0) {
        lint syohi_min = 100000001;
        lint tmp_h, tmp_syohi;        
        REP (i, N) {
            if (H_tmp > A[i]) {
                // 消費対効率が良い場合
                if (syohi_min > (H_tmp/A[i] * B[i])) {
                    // tmp_syohi = H_tmp/A[i] * B[i];
                    // tmp_h = H_tmp % A[i];
                    tmp_syohi = B[i];
                    tmp_h = H_tmp - A[i];
                    syohi_min = tmp_syohi;
                }
            } else {
                // 消費対効率が良い場合
                if (syohi_min > B[i]) {
                    tmp_syohi = B[i];
                    tmp_h = 0;
                    syohi_min = tmp_syohi;
                }
            }
        }
        // cout << "tmp_syohi : " << tmp_syohi;
        // cout << ", tmp_h : " << tmp_h << endl;
        H_tmp = tmp_h;
        syohi_sum += tmp_syohi;
    }

    REP (i, N) {
        if ((H % A[i]) == 0) {
            syohi_sum = min((H % A[i]) * B[i], syohi_sum);
        }
    }
    cout << syohi_sum << endl;
    return 0;
}