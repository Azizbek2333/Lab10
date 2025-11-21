#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    cout << sumArray(a, 5);   // Output: 15
}
