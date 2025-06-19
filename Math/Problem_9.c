//Palindrome Number

#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    } else {
        int orginal = x, remainder;
        long long reversed = 0;

        while (x != 0) {
            remainder = x % 10;
            reversed = reversed * 10 + remainder;
            x /= 10;
        }

        if (orginal == reversed) {
            return true;
        } else {
            return false;
        }
    }
}
