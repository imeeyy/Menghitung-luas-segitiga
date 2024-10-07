#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float alas, tinggi, luas;

    cout << "Program Menghitung Luas Segitiga" << endl;

    // Input alas
    cout << "Masukkan Nilai Alas (positif): ";
    cin >> alas;
    // Input validation for alas
    if (alas <= 0) {
        cout << "Nilai alas harus positif!" << endl;
        return 1; // Exit program with error
    }

    // Input tinggi
    cout << "Masukkan Nilai Tinggi (positif): ";
    cin >> tinggi;
    // Input validation for tinggi
    if (tinggi <= 0) {
        cout << "Nilai tinggi harus positif!" << endl;
        return 1; // Exit program with error
    }

    // Calculate area
    luas = (alas * tinggi) / 2;

    // Output result
    cout << "Luas Segitiga Adalah: " << luas << endl;

    return 0;
}
