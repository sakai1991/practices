#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)
#define REPRE(i,n) for (lint i = N-1; i < 0; i--)
#define REP1RE(i,n) for (lint i = N-1; i < 1; i--)

int N;
char boad[50][50];
string s;

int main(void){
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> s;
        for (int j = 0; j < N; ++j) {
            boad[j][N-i-1] = s[j];
        }
    }
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << boad[i][j];
        }
        cout << endl;
    }
    return 0;
}