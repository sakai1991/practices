#include <bits/stdc++.h>
using namespace std;
// [問題]
// ある文字列が全て固有（重複する文字がない）であることを判定するアルゴリズムを実装せよ

bool isUnique(string str) {
    vector<bool> char_set(str.length(), false);
    for (int i = 0; i < str.length(); ++i) {
        int val = str[i];
        if (char_set[val]) {
            return false;
        }
        char_set[val] = true;
    }
    return true;
}

int main() {
    string str = "acbd";
    cout << isUnique(str) << endl;
    // 1
}