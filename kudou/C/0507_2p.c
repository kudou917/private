#include <stdio.h>
// Step1　0507_2.c から 0507_2f.cを作ってPrintfする部分を
// void  m_print(kouzoutai pram) みたいな関数をつくる
struct Student
{
    int id;
    char name[50];
    double gpa;
};

void m_print(struct Student * p_pram)
{
     printf("ID:%d | name:%s | GPA:%.1f\n", p_pram->id, p_pram->name ,p_pram->gpa);
}

int main(void)
{
    struct Student stu[5];
    int count = 0;
    printf("登録するデータを入力してください。IDに0を入力すると終了します。\n");

    for (int i = 0; i < 5; i++)
    {
        printf("ID:");
        scanf("%d", &stu[i].id);

        if (stu[i].id == 0)
            break; // 0ならループを抜ける

        printf("Name:");
        scanf("%s", &stu[i].name[0]); // 構造体i番目のnameの先頭アドレスから入れる

        printf("GPA:");
        scanf("%lf", &stu[i].gpa); // double型は %lf
        count++;                   // 登録人数を増やす。
    }
    printf("--- 学生情報 ---\n");
    for (int i = 0; i < count; i++)
    {
        m_print(&stu[i]);
    } // 入力された人数分だけ回す
    return 0;
}