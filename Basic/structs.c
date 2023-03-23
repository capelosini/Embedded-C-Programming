#include <stdio.h>

struct Person{
    char age;
    short height;
};

int main(int argc, char *argv[]){
    struct Person me;
    me.age=17;
    me.height=170;
    
    printf("Age: %d - Height: %d\n", me.age, me.height);

    struct Person friends[2] = {0};

    friends[0].age=19;
    friends[0].height=184;

    friends[1].age=18;
    friends[1].height=196;

    printf("Age: %d - Height: %d\n", friends[0].age, friends[0].height);
    printf("Age: %d - Height: %d\n", friends[1].age, friends[1].height);

    return 0;
}