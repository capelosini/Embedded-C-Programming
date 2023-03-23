#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 3;

    printf("%d\n", x&y);
    printf("%d\n", x|y);
    printf("%d\n", x^y);

    return 0;
}
