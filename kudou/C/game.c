#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int ans;
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 5 + 1;
    printf("数当てゲームをしよう！\n5回までに当ててみてね！\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ans);
        if (n == ans)
        {
            printf("正解！また遊んでね！\n");
            break;
        }
        else if (n != ans && i == 4)
        {
            printf("残念。。また遊んでね。。。\n");
        }
        else
        {
            printf("残念。。もう一度こたえてね！\n");
        }       
    }
    return 0;
}