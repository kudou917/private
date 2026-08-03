#include <stdio.h>

int main(void){
    int kuji =0;//1�F��g, 2�F���g, 3:��
    printf("1~3�܂ł̔ԍ�����͂��Ă�������\n");
    scanf("%d",&kuji);

    printf("���݂����̌��� (�ԍ�:%d)\n", kuji);
    switch (kuji) {
        case 1:
            printf("��g�ł��I\n");
            break;//���ꂪ�Ȃ��ƈȉ����\�������B
        case 2:
            printf("���g�ł��B\n");
            break;
        case 3:
            printf("���ł��B�B�B\n");
            break;
        default:
            printf("�ԍ����Ԉ���Ă��܂��B\n");
            break;
    }

    return 0;
}