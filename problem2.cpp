#include <stdio.h>

int main(){
    int dp[1000] = {0};
    long long sum = 0;

    dp[1] = 2;
    dp[2] = 8;

    sum += dp[1];
    sum += dp[2];

    for (int i = 3; ; i ++){
        dp[i] = dp[i-1] * 4 + dp[i-2];

        if(dp[i] > 4000000){
            break;
        }

        sum += dp[i];
    }

    printf("%lld", sum);
}