#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(const string &str, char target) {
    int left = 0, right = str.length() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (str[mid] == target) {
            return mid;
        } else if (str[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // not found
}

int main() {
    string kalimat;
    char cari;
    
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);
    
    cout << "Masukkan huruf yang ingin Anda cari: ";
    cin >> cari;
    
    // Mengurutkan kalimat menggunakan fungsi sort dari STL
    sort(kalimat.begin(), kalimat.end());
    
    // Mencari huruf menggunakan binary search
    int index = binary_search(kalimat, cari);
    
    if (index != -1) {
        cout << "Huruf '" << cari << "' ditemukan pada indeks ke-" << index << " dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << cari << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
