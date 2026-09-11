#include <stdio.h>

int main(){
    long long n = 600851475143;
    long long answer = 0;

    for (long long i = 2; i * i <= n; i++){
        while (n % i == 0){
            answer = i;
            n = n / i;
        }
    }

    if (n > 1){
        answer = n;
    }

    printf("%lld", answer);
}
