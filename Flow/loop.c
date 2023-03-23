#include <stdio.h>

int main(int argc, char const *argv[])
{
    short arrLen=50;
    short arr[arrLen];

    int i;
    for(i=0; i<arrLen; i++){
        printf("%d\n", i);
        arr[i] = i;
    }

    i=0;
    while(i<arrLen){
        printf("%d\n", i);
        arr[i] = i;
        i++;
    }

    // do{
    //     <code>;
    // } while(x<y);

    return 0;
}
