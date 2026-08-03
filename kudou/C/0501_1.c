#include <stdio.h>

//ageという「int型の引数」を1つうけとる関数
void print_age(int age);

int main(void){
    int my_age = 20;

    print_age(my_age);

    print_age(35);

    return 0;
}

void print_age(int age){
    printf("your age is %d\n",age);
}