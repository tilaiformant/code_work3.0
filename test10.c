/*     ch3_11.c        */
#include <stdio.h>

int main()
{
        int i = 10;
        float j = 123.56;

        printf("格式化輸出八位元\n");
        printf("/%o/\n",i);
        printf("/%-8o/\n",i);
        printf("格式化輸出十六位元\n");
        printf("/%x/\n",i);
        printf("/%8x/\n",i);
        printf("格式化輸出不帶正負號數值\n");
        printf("/%u/\n",i);
        printf("/%8u/\n",i);
        printf("格式化輸出科學符號\n");
        printf("/%e/\n",j);
        printf("/%8.3e/\n",j);

     

    getchar();
    return 0;






}