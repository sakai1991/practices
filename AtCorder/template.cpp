#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)
#define REPRE(i,n) for (lint i = N-1; i < 0; i--)
#define REP1RE(i,n) for (lint i = N-1; i < 1; i--)

string N;
int ans;

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    cin >> N;
    int len = N.length();
    REP (i, len) {
        if (N[len - i - 1] == '1') ans = ans + (1 << i);
    }
    cout << ans << endl;
    return 0;
}