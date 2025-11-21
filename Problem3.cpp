#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int arr[10];
    int* ptrA = arr;

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++) {
        cout << "Address: " << (ptrA + i)
             << "  Value: " << *(ptrA + i) << endl;
    }

    return 0;
}
