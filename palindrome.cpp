#include <iostream>
using namespace std;

int isPalindrome(int num) {
    int original = num;
    int reverse = 0, rem;

    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << "The number is a palindrome.";
    else
        cout << "The number is not a palindrome.";

    return 0;
}
