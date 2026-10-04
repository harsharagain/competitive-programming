#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    
    int total = 0;

    while (n--) {
        int height;
        cin >> height;

        if (height > h) {
            total += 2;
        }
        else {
            total += 1;
        }
    }

    cout << total;
}

