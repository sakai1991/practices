#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

int main(void){
    // input
    string S;
    lint ans = 0;
    cin >> S;

    lint left_point = 0;
    lint right_point = S.length() - 1;
    char left = S[left_point];
    char right = S[right_point];


    while ((right_point - left_point) > 1) {
        ++left_point;
        --right_point;
        if (S[left_point] != left) {
            left = S[left_point];
            ++ans;
        }
        if (S[right_point] != right) {
            right = S[right_point];
            ++ans;
        }
    }

    if (S[left_point] != S[right_point]) {
        cout << ans + 1 << endl;
    } else {
        cout << ans << endl;
    }
    
    return 0;
}