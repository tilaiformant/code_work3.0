/*    ch2_16.c    */
#include <stdio.h>

int main()
{   
    float f,c;

    printf("請輸入華氏溫度 \n==>");
    scanf("%f",&f);
    c = ( 5.0 / 9.0 ) * ( f - 32.0 );
    printf("攝氏溫度是 %6.2f \n",c);


    getchar();
    return 0;
}