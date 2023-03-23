#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;

    scanf("%d %d", &x, &y);

    if(x == y){
        printf("X is equal Y\n");
    } else if(x > y){
        printf("X is greater than Y\n");
    } else{
        printf("X is lower than Y\n");
    }

    return 0;
}
