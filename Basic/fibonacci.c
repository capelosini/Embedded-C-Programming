#include <stdio.h>

struct FXY{
    int x;
    int y;
    int tmp;
};

int fibonacci(int r){
    struct FXY fxy = {0, 1, 0};
    for(int i=1; i<r; i++){
        fxy.tmp=fxy.x+fxy.y;
        fxy.x=fxy.y;
        fxy.y=fxy.tmp;
    }
    return fxy.y;
};

int main(int argc, char const *argv[])
{
    printf("%d\n", fibonacci(0));
    return 0;
}
