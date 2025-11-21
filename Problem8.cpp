#include <iostream>
using namespace std;

int cstrLength(char* c) {
    char* ptr = c;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

int main() {
    char str[100];
    cin.getline(str, 100);

    cout << "Length: " << cstrLength(str);
}
