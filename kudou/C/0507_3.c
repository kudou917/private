#include <stdio.h>
#include <string.h>

struct Student{
    int id;
    char name[50];
    double gpa;
};

int main(void) {
    struct Student stu1;
    struct Student *p_stu;
    
    p_stu = &stu1;

    p_stu->id = 101;
    strcpy(p_stu->name, "Taro Yamada");
    p_stu->gpa = 3.5;

    
    printf("--- Šw¶î•ñ ---\n");
        printf("ID:%d\n", p_stu->id);
        printf("name:%s\n", p_stu->name);
        printf("GPA:%.1f\n",p_stu->gpa);    
    return 0;
}