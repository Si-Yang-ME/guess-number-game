#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void) {
    srand((unsigned int)time(NULL)); //这个代码初始化种子
    static int r=0x00;    //给随机数定义
    r=rand()%100+1;        //给随机数取值1-100
    static int *xr=&r;       //xr是r的指针
    static int guess=0x00;   //用户输入guess
    static int *xguess=&guess;  //xguess是guess的指针
    int trynumber=0;//尝试次数
    int *xtrynumber=NULL;
    xtrynumber=&trynumber;

    printf("欢迎来到猜数字游戏");
    printf("\n请输入数字1-100\n");

    do {

        scanf("%d", &*xguess);
        if (*xguess<=100&&*xguess>=1) {



            if (*xguess!=*xr) {
                printf("\n不对,");
                (*xtrynumber)++;
                if (*xguess>*xr) {
                    printf("大了.请再次输入\n");
                    printf("尝试次数：%d\n", *xtrynumber);
                }
                if (*xguess<*xr) {
                    printf("小了.请再次输入\n");
                    printf("尝试次数：%d\n", *xtrynumber);
                }



            }







            if (*xguess==*xr) {
                printf("\n对了.");
                printf("尝试次数：%d\n", *xtrynumber);
                return 0x00;   //注释:0x00猜对了
            }




            //这是显示数值的多少，这段注释掉的代码别动
            //printf("%d",*xr);
        }
        else {
            printf("请输入1~100以内的数，请重新输入");
            while(getchar() != '\n');

        }
    } while(*xr!=*xguess);




}