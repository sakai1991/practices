#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint N , a;
vector<lint> A;
// vector<lint> B;

struct list_num {
    list<int> lst;

    int toInt() {
        int ans;
        for (int i = 0; i < lst.size(); ++i) {
            ans += lst.pop_back()*(pow(10, i));
        }
        return ans;
    }
};

lint lcm(lint a, lint b) {
    lint x = a * b;
    lint tmp;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }   

    /* ユークリッドの互除法 */
    lint r = a % b;
    while(r!=0){
        a = b;
        b = r;
        r = a % b;
    }
    return x/b;
}

int main(void){
    lint ans = 0;
    cin >> N;
    double l = 1;
    REP (i, N) {
        cin >> a;
        A.push_back(a);
        l = lcm(A.at(i), l);
    }
    // sort(A.begin(), A.end(), greater<int>());

    REP (i, N) {
        ans += (l / A.at(i));
        ans = ans % 1000000007;
    }
    cout << ans % 1000000007 << endl;
    return 0;
}