#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string clean = "";

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (c >= '0' && c <= '9') {
            clean += c;
        }
        else if (c >= 'A' && c <= 'Z') {
            clean += (c + 32);
        }
        else if (c >= 'a' && c <= 'z') {
            clean += c;
        }
    }

    int kiri = 0;
    int kanan = clean.length() - 1;
    bool palindrom = true;

    while (kiri < kanan) {
        if (clean[kiri] != clean[kanan]) {
            palindrom = false;
            break;
        }
        kiri++;
        kanan--;
    }

    if (palindrom)
        cout << "True";
    else
        cout << "False";

    return 0;
}
