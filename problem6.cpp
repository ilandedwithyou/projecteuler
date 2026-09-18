#include <stdio.h>

int main() {
    int number[200];
    int size = 1;

    number[0] = 1;

    for (int i = 2; i <= 100; i++) {
        int carry = 0;

        for (int j = 0; j < size; j++) {
            int value = number[j] * i + carry;

            number[j] = value % 10;
            carry = value / 10;
        }

        while (carry > 0) {
            number[size] = carry % 10;
            carry = carry / 10;
            size++;
        }
    }

    int answer = 0;

    for (int i = 0; i < size; i++) {
        answer += number[i];
    }

    printf("%d", answer);

    return 0;
}