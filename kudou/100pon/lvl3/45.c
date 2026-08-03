#include <stdio.h>
#include <math.h>
// 初乗り料金が1700mまで610円、それ以降は313mごとに80円のタクシーがある。
// このタクシーに乗った距離をm単位で入力し、料金を計算するプログラムを作成せよ。
int main(void)
{
    int distance;
    printf("input distance\n");
    scanf("%d", &distance);
    if (distance <= 1700)
    {
        printf("tax is 610 yen");
    }
    else if ( ( distance - 1700 ) % 313 == 0 )
    {
        printf("tax is %d yen", 610 + (distance  - 1700 )  / 313 * 80);
    }
    
    else
    {
        
        printf("tax is %d yen", 610 + ( ( distance - 1700 )  / 313 + 1 ) * 80);
        
    }
    // 数学でつっかえるのが一番恥ずかしい
    return 0;
}