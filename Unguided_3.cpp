#include <iostream>

int sequentialSearch(int arr[], int n, int key) {
    int count = 0; 
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            count++; 
        }
    }
    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int key = 4; 
    int n = sizeof(data) / sizeof(data[0]); 

    int count = sequentialSearch(data, n, key);
    std::cout << "Jumlah angka " << key << " dalam array adalah: " << count << std::endl;

    return 0;
}
