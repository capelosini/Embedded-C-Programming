#include <stdio.h>

struct Person{
    short age;
};

void pChange();

int main(int argc, char const *argv[])
{
    struct Person me = {17};
    printf("%d\n", me.age);

    pChange(&me, 0);

    printf("%d\n", me.age);

    return 0;
}

void pChange(struct Person *p, int newAge){
    p->age=newAge;
}