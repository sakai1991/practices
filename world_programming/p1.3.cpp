#include <bits/stdc++.h>
using namespace std;

string fillSpace(string str, int str_len) {
    map<int, string> tmp;
    char replace_char = ' ';
    for (int i = 0; i < str_len; ++i) {
        if (str[i] == replace_char) {
            tmp[i] = "%20";
        } else {
            tmp[i] = str[i];
        }
    }
    string tmp_str;
    for (const auto& [key, value] : tmp){
        tmp_str += value;
    }
    return tmp_str;
}

string X;
int x;

int main() {
    X = "My name is xxx";
    x = 14;
    cout << fillSpace(X, x) << endl;
    // My%20name%20is%20xxx
}