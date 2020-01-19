#include <bits/stdc++.h>
using namespace std;
// [問題]
// 2 つの文字列が与えられたとき、片方の文字列がもう片方の文字列の並び替えになっているかどうか
// 判定するメソッドを作成してください。

bool isSorted(string str1, string str2) {
    if (!(str1.length() == str2.length())) return false;

    map<int, int> idx_list1;
    map<int, int> idx_list2;
    for (int i = 0; i < str1.length(); ++i) {
        int idx1 = str1[i];
        int idx2 = str2[i];
        idx_list1[idx1] += 1;
        idx_list2[idx2] += 1;
    }

    if (idx_list1 == idx_list2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string s1 = "abaa";
    string s2 = "aabc";
    cout << isSorted(s1, s2) << endl;
    // 0

    string s3 = "abca";
    string s4 = "abac";
    cout << isSorted(s3, s4) << endl;
    // 1

}