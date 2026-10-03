// Problem: A - Watermelon
// Platform: codeforces
// Contest: Contest-4
// Language: C++17 (GCC 7-32)
// Verdict: Accepted
// URL: https://codeforces.com/contest/4/submission/393069465
// Solved on: 2026-10-03T12:24:41.609Z

#include <iostream>
using namespace std;
 
int main() {
    int w;
    cin >> w;
 
    if (w%2 == 0 && w > 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}