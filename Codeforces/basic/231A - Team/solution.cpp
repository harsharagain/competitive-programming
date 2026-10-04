#include <iostream>
using namespace std;

int main() {
    int n, total;
    cin >> n;
    total = 0;

    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;

        if (x + y + z > 1) {
            total++;
        }
    }

    cout << total;
}

