#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)
#define REPRE(i,n) for (lint i = N-1; i < 0; i--)
#define REP1RE(i,n) for (lint i = N-1; i < 1; i--)

lint A, K;

struct takahashi {
    lint money;
    lint days;
    lint purpose;

    void nextDay() {
        money += 1 + money * K;
        ++days;
    }
};

int main(void){
    cin >> A >> K;
    lint purpose = 2 * pow(10, 12);
    struct takahashi t = {A, 0, purpose};

    if (K == 0) {
        t.days = t.purpose - t.money;
        t.money = t.purpose;
    }

    while (t.money < purpose) {
        t.nextDay();
    }
    cout << t.days << endl;
    return 0;
}