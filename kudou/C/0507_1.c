#include <stdio.h>
#include <string.h>


struct Student{
    int id;
    char name[50];
    double gpa;
};

int main(void){
    struct Student stu1;
    
    stu1.id = 101;
    strcpy(stu1.name, "Taro Yamada");
    stu1.gpa = 3.5;

    printf("\n---Šw¶î•ñ---\n");
    printf("Šw¯”Ô†:%d\n", stu1.id);
    printf("–¼    :%s\n", stu1.name);
    printf("GPA     :%.1f\n", stu1.gpa);
    
    return 0;
}