#include <iostream>
using namespace std;

int subtract(int num1, int num2, int base) {
    int result = 0;
    int borrow = 0;
    int power = 1;

    while (num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;

        // Handle borrowing
        digit1 -= borrow;
        if (digit1 < digit2) {
            digit1 += base;
            borrow = 1;
        } else {
            borrow = 0;
        }

        // Calculate difference for this digit position
        int diff = digit1 - digit2;

        // Update result
        result += diff * power;

        // Move to next digit position
        power *= 10;
        num1 /= 10;
        num2 /= 10;
    }

    return result;
}

int main() {
    int result = subtract(721, 652, 8);
    cout << "Result: " << result << endl;

    return 0;
}
