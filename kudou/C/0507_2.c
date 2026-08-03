#include <stdio.h>

struct Student{
    int id;
    char name[50];
    double gpa;
};

int main(void) {
    struct Student stu[10];
    int count = 0;
    
    printf("登録するデータを入力してください。IDに0を入力すると終了します。\n");

    for ( int i = 0; i < 10; i++) {
        printf("ID:");
        scanf("%d",&stu[i].id);

        if (stu[i].id == 0) break;
        
        printf("Name:");
        scanf("%s", &stu[i].name[0]);

        printf("GPA:");
        scanf("%lf", &stu[i].gpa);
        count++;
    }
    
    printf("--- 学生情報 ---\n");
    for(int i = 0 ; i < count; i++){
        printf("ID:%d | name:%s | GPA:%.1f\n", stu[i].id, stu[i].name ,stu[i].gpa);    
    }
    return 0;
}