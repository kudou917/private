#include <stdio.h>

void main() {
    int a = 1;
    int b = 2;

    printf("%d + %d = %d\n", a, b, a + b);//‘«‚µZ
    printf("%d - %d = %d\n", a, b, a - b);//ˆø‚«Z
    printf("%d * %d = %d\n", a, b, a * b);//Š|‚¯Z
    printf("%d € %d = %d\n", a, b, a / b);//Š„‚èZ
    printf("%d € %d‚Ì—]‚è‚Í%d\n", a, b, a % b);//Š„‚èZ‚Ì—]‚è

    printf("----------------\n");

    int sum1 = a + b;//a+b‚ÌŒvZŒ‹‰Ê‚Ì‘ã“ü
    int sum2 = 2 + 2;//2{2‚ÌŒvZŒ‹‰Ê‚Ì‘ã“ü

    printf("%d +%d = %d\n", a, b, sum1);
    printf("2 + 2 = %d\n", sum2);

}