#include <iostream>
#include <string>
using namespace std;

struct Data {
    string nama;
    int berat;
    string layanan;
};

string lower(string s) { // lower untuk mempermudah bedakan reguler dan si express ya
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    return s;
}

int main() {
    int n;
    cin >> n;

    Data express[100];
    Data reguler[100];

    int eFront = 0, eBack = 0;
    int rFront = 0, rBack = 0;

    for (int i = 0; i < n; i++) {
        Data x;
        cin >> x.nama >> x.berat >> x.layanan;

        string jenis = lower(x.layanan);

        if (jenis == "express") {
            express[eBack] = x;
            eBack++;
        } else {
            reguler[rBack] = x;
            rBack++;
        }
    }

    int total = 0;

    for (int i = eFront; i < eBack; i++) {
        cout << express[i].nama << endl;
        total += express[i].berat * 5;
    }

    for (int i = rFront; i < rBack; i++) {
        cout << reguler[i].nama << endl;
        total += reguler[i].berat * 10;
    }

    cout << "Total waktu: " << total << " menit" << endl;

    return 0;
}
