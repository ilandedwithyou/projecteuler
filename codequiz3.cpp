#include <stdio.h>
#include <stdbool.h>

int main(){
    bool screen[1080][1920] = {0};

    int x1, y1, x2, y2;

    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) == 4){

        for(int y = y1; y < y2; y++){
            for(int x = x1; x < x2; x++){
                screen[y][x] = true;
            }
        }
    }

    int answer = 0;

    for(int y = 0; y < 1080; y++){
        for(int x = 0; x < 1920; x++){
            if(screen[y][x]){
                answer++;
            }
        }
    }

    printf("%d\n", answer);
}