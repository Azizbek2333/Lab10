#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* left = arr;
    int* right = arr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    reverseArray(a, 5);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";   // prints 5 4 3 2 1
    }
}
