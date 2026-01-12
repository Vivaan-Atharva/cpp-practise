#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1;

    cout << "Enter a string: ";
    cin >> str;

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        cout << "Palindrome string" << endl;
    else
        cout << "Not a palindrome string" << endl;

    return 0;
}
