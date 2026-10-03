// Problem: 69A - Young Physicist
// Platform: codeforces
// Contest: Contest-69
// Rating/Difficulty: 1000
// Language: C++17 (GCC 7-32)
// Verdict: Accepted
// URL: https://codeforces.com/contest/69/submission/69
// Solved on: 2026-10-03T15:34:19.578Z

#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int sumX, sumY, sumZ; 
    sumX = sumY = sumZ = 0;
 
    for (int i = 0; i < n; i++) {
        int x, y, z; cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
 
    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
