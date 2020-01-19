#include <bits/stdc++.h>
using namespace std;

string X = "aabccccaaasaklfjwheliufhqo34fwifhsidfhqpwiedopowiehjfoiqwehfoiqwuhefoqijwbedoijwqndvcjdnsoiqwheifudw";

// 文字列連結を行なっているので遅い
string strCompresser1(string str) {
    map<char, int> str_count;
    string res;
    for (int i = 0; i < str.length(); ++i) {
        str_count[str[i]] += 1;
        if (!(str[i] == str[i+1])) {
            auto it = str_count.begin();
            res += it->first + to_string(it->second);
            str_count.erase(it);
        }
    }
    return res;
}

// 配列に突っ込んでいるので（文字列連結するよりは）早い
void strCompresser2(string str) {
    map<char, int> str_count;
    vector<char> res;
    for (int i = 0; i < str.length(); ++i) {
        str_count[str[i]] += 1;
        if (!(str[i] == str[i+1])) {
            auto it = str_count.begin();
            res.push_back(it->first);
            res.push_back('0' + it->second);
            str_count.erase(it);
        }
    }
    for (auto v : res) {
        cout << v;
    }
    cout << "" << endl;
}

void solv1() {
    clock_t start = clock();
    cout << strCompresser1(X) << endl;
    clock_t end = clock();

    const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
    printf("time %lf[ms]\n", time);
}

void solv2() {
    clock_t start = clock();
    strCompresser2(X);
    clock_t end = clock();

    const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
    printf("time %lf[ms]\n", time);
}

int main() {
    solv1();
    solv2();
    return 0;
}