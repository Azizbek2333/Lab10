#include <iostream>
using namespace std;

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    minVal = *arr;
    maxVal = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < minVal)
            minVal = *(arr + i);

        if (*(arr + i) > maxVal)
            maxVal = *(arr + i);
    }
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) cin >> arr[i];

    int minVal, maxVal;

    findMinMax(arr, size, minVal, maxVal);

    cout << "min=" << minVal << endl;
    cout << "max=" << maxVal << endl;
}
