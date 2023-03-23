#include <stdio.h>

int main(int argc, char *argv[]){
    int arr[4] = {1, 2, 3, 4};

    arr[1] = arr[2] + arr[0];

    return 0;
}