#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

lint a , b;

int main(void){
    cin >> a >> b;
    ((a <= 8) && (b <= 8)) ? cout << "Yay!" << endl : cout << ":(" << endl;
    return 0;
}