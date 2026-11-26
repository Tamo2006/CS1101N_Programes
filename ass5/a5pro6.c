#include <stdio.h>

// Function to reverse an integeri
int reverseIntger(int n) {
    int rev = 0, rem;

    while (n != 0) {
        rem = n % 10;          // Extract the last digit
        rev = rev * 10 + rem;  // Build the reversed number
        n = n / 10;            // Remove the last digit
    }

    return rev;
}

int main() {
    int num, ans;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function
    ans = reverseIntger(num);

    printf("Reversed integer: %d\n", ans);

    return 0;
}
