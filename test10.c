/*    ch2_16.c    */
#include <stdio.h>

int main()
{   
    float height, weight, bmi;


    printf("輸入身高(公尺) \n",height);
    scanf("%f",&height);
    printf("輸入體重(公斤) \n",weight);
    scanf("%f",&weight);
    bmi = weight / (height * height);
    printf("bmi值為: %2f",bmi);



    getchar();
    return 0;
}