/*    ch2_16.c    */
#include <stdio.h>

int main()
{   
    int i;
    char ch;

    printf("請輸入 1 個整數 \n==>");
    scanf("%d",&i);
    printf("請輸入 1 個字元 \n==>");
    fflush(stdin);   /* 清除緩衝區 */
    scanf("%c",&ch);
    printf("整數是=%d, Ascii碼值是=%d, 字元是=%c \n",i,ch,ch);

    getchar();// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
