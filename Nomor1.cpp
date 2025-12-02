#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;

        int total;

        if (n % 2 == 0)
            total = 0;
        else
            total = x;

        cout << total << endl;
    }

    return 0;
}
