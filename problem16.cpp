#include <stdio.h>

int main() {
    int a[1000] = {0};

    a[0] = 1;
    int size = 1;

    for (int i = 0; i < 1000; i++) {
        int carry = 0;

        for (int j = 0; j < size; j++) {
            int value = a[j] * 2 + carry;

            a[j] = value % 10;
            carry = value / 10;
        }

        if (carry > 0) {
            a[size] = carry;
            size++;
        }
    }

    int answer = 0;

    for (int i = 0; i < size; i++) {
        answer += a[i];
    }

    printf("%d\n", answer);

    return 0;
}