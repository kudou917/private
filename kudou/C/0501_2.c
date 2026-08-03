#include <stdio.h>
#include <string.h>//string.h をインクルードする。
void print_age(int age);

int main(void){
   char str1[] = "Hello";
   char str2[20];
   int len;

   len = strlen(str1);
   printf("str1 of length（\\0を含まない）：%d\n", len);

   strcpy(str2, str1);
   printf("copied str %s\n", str2);

   if (strcmp(str1, str2) == 0 ) {
        printf("str1 and str2 is same.\n");
   }
   
   if (strcmp(str1, "World") != 0){
    printf("str1 and \"World\" is not same.\n");
   }
   
}
