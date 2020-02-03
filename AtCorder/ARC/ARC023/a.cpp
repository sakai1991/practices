#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

struct ymd {
    int y;
    int m;
    int d;
};

int numOfElapsed(int y, int m, int d) {
    if ((m == 1) || (m == 2)) {
        m += 12;
        y -= 1;
    }
    return 365*y + (y/4) - (y/100) + (y/400) + 306*(m+1)/10 + d - 429;
}

int main(void){
    int y, m, d;
    cin >> y;
    cin >> m;
    cin >> d;
    struct ymd from = {y, m, d};
    struct ymd to = {2014, 5, 17};

    int ans = numOfElapsed(to.y, to.m, to.d) - numOfElapsed(from.y, from.m, from.d);
    cout << ans << endl;
    return 0;
}