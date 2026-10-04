#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    while (n--) {
        string w;
        cin >> w;
 
        int l = w.length();
 
        if (l <= 10) {
            cout << w << endl;
        } else {
            cout << w[0] << l - 2 << w[l - 1] << endl;
        }
    }
}