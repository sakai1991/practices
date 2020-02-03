#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

struct person {
    string tefuda_s;
    queue<char> tefuda_q = parseString();

    char fetchTop() {
        if (tefuda_q.empty()) {
            return 0;
        }
        char res = (tefuda_q).front();
        (tefuda_q).pop();
        return res;
    }
    queue<char> parseString() {
        queue<char> q;
        for (int i = 0; i < tefuda_s.length(); ++i) {
            q.push(tefuda_s[i]);
        }
        return q;
    }
};

char upper(char c){
    if('a' <= c && c <= 'z'){
        c = c - ('a' - 'A');
    }
    return c;
}

int main(void){
    // input
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    struct person A = {a};
    struct person B = {b};
    struct person C = {c};

    char now_person = 'a';
    char next_person;
    while (1) {
        if (now_person == 'a') next_person = A.fetchTop();
        else if (now_person == 'b') next_person = B.fetchTop();
        else if (now_person == 'c') next_person = C.fetchTop();
        
        // cout << "now : " << now_person << ", next : " << next_person << endl;
        
        if (next_person == 0) {
            cout << upper(now_person) << endl;
            break;
        } else {
            now_person = next_person;
        }
    }
    return 0;
}