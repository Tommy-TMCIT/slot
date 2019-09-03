#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    system("chcp 65001");
    system("cls");
    int i,j=0;
    unsigned int seed;
    
    seed=time(NULL);
    srand(seed);

    for(;;)
     {
         j++;
         
        i=rand();
        //変数iに発生させた乱数を格納
        printf("フラグNo.%d\n",i);
        //iの中身を表示し改行

        if(i>=0&&i<164)
        {
            printf("BB当選\n");
            break;
        }
        else if(i>=3000&&i<3164)
        {
            printf("RB当選\n");
            break;
        }
        else if(i>=6000&&i<9486)
        {
            printf("ベル\n");
           
        }
        else if(i>=12000&&i<16479)
        {
            printf("リプレイ\n");
            
        }
        else if(i>=18000&&i<18302)
        {
            printf("スイカ\n");
            
        }
        else if(i>=21000&&i<21449)
        {
            printf("RB当選\n");
            
        }
        else  printf("はずれ\n");
        
     }
     printf("総回転数%d\n",j);
    return 0;
}
