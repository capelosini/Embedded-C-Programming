#include <stdio.h>

int sub();

int main(int argc, char const *argv[])
{
    int r = sub(5, 2);

    printf("%d\n", r);

    return 0;
}

int sub(int x, int y){
    return x-y;
}
