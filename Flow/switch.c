#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;

    scanf("%d", &x);

    switch(x){
        case 0:
            printf("This is a zero!\n");
            break;
        case 1:
            printf("This is a one!\n");
            break;
        case 2:
            printf("This is a two!\n");
            break;
        default:
            printf("I don't know what is %d!\n", x);
            break;
    }

    return 0;
}
