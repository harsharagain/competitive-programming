#include <iostream>
using namespace std;

int main() {
    int n;
    int x = 0;
    cin >> n;
    
    while (n--) {
        string k;
        cin >> k;

        if (k == "++X" or k == "X++") {
            x++;
            }
        else {
            x--;
        }
    }

    cout << x;
}
