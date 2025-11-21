#include <iostream>
using namespace std;

void factorial(int n, int *fact) {
    *fact = 1;
    for (int i = 1; i <= n; i++) {
        *fact *= i;
    }
}

int main() {
    int n;
    cin >> n;

    int result;
    factorial(n, &result);

    cout << result;
}
