#include <iostream>
using namespace std;

int findLargestElement(const int* arr, int size) {
    const int* ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    return largest;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << findLargestElement(arr, n);
}
