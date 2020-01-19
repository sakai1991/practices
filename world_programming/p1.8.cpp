#include <bits/stdc++.h>
using namespace std;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

int C[4][4] = {
    {1, 1, 1, 1},
    {1, 0, 1, 1},
    {1, 1, 1, 1},
    {1, 1, 1, 1},
};

void replace_zero(int x, int y) {
    int len = ARRAY_LENGTH(C[0]);
    if ((C[x][y] == 0)) { 
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < len; ++j) {
                if ((i == x) || (j == y)) C[i][j] = 0;
            }
        }
    }
}

int main() {
    replace_zero(1, 1);
    int len = ARRAY_LENGTH(C[0]);
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            cout << C[i][j];
        }
        cout << "" << endl;
    }
    return 0;
}