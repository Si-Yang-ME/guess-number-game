
/*本程序是自由软件：您可以根据自由软件基金会发布的 GNU Affero 通用公共许可证的条款重新分发和/或修改它，无论是许可证的第 3 版，还是（根据您的选择）任何更高版本。

本程序的分发是希望它会有用，但没有任何担保；甚至没有对适销性或特定用途适用性的暗示担保。有关更多详细信息，请参见 GNU Affero 通用公共许可证。

您应该已经随本程序收到了一份 GNU Affero 通用公共许可证的副本。如果没有，请参见 <https://www.gnu.org/licenses/>。
你可以在<https://github.com/Si-Yang-ME/guess-number-game>
或者其最新链接查看其源代码
This program is free software: you can redistribute it and/or modify it under the terms of the GNU Affero General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
You may view the source code at <https://github.com/Si-Yang-ME/guess-number-game> or its latest available link.


*/





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