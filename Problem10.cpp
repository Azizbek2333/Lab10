#include <iostream>
using namespace std;

char toLower(const char s) {
    if (s >= 'A' && s <= 'Z')
        return s + ('a' - 'A');
    return s;
}

void countChar(const char* str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    const char* ptr = str;
    while (*ptr != '\0') {
        char ch = toLower(*ptr);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowelCount++;
            else
                consonantCount++;
        }
        ptr++;
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);

    int vowels, consonants;
    countChar(str, vowels, consonants);

    cout << "vowels: " << vowels << endl;
    cout << "consonants: " << consonants << endl;
}
