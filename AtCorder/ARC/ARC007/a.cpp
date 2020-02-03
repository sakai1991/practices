#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,n) for (lint i = 0; i < (n); i++)
#define REP1(i,n) for (lint i = 1; i < (n); i++)

int N, M;
int now = 0, next_play;
vector<int> disk;

// x が入った disk と中身を交換する
void changeCase(int next_play, int now_play) {
    for (int i = 0; i < N + 1; ++i) {
        if (disk[i] == next_play) {
            disk[i] = now_play;
            disk[0] = next_play;
        }
    }
}

int main(void){
    cin >> N >> M;
    for (int i = 0; i < N+1; ++i) disk.push_back(i);
    for (int i = 0; i < M; ++i) {
        cin >> next_play;
        changeCase(next_play, disk[0]);
    }
    
    for (auto it = disk.begin() + 1; it != disk.end(); ++it) { 
        cout << *it << endl;
    }
    return 0;
}