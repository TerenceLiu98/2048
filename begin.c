//
//  begin.c
//  2048
//
//  Created by 刘骏杰 on 11/12/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include "begin.h"
void start() //define a new function called
{
    system("cls");//刷新屏幕 
    printf("********************\n");
    printf("* game start glhf~ *\n");
    printf("********************\n");
    int x=5e8;
    bool flag=false;
    while(x--);//为了让glhf停留一段时间
    memset(mp,0,sizeof(mp));
    memset(map,false,sizeof(map));
    score=0;
    char ch;
    while(!gameover())
    {
        memset(cal,false,sizeof(cal));//每次动作前都需要对cal进行初始化
        int cnt=0;
        system("cls");
        Init();
        print();
        // DeBug();调试用
        ch=getch();
        switch (ch)
        {
            case 'w':MoveUp();break;
            case 's':MoveDown();break;
            case 'a':MoveLeft();break;
            case 'd':MoveRight();break;
            case 'e':exit(0);
            case 'r':return ;
        }
        if(score>=2048){
            flag=true;
            break;
        }
    }
    if(flag)
    Win();
    else
    Lose();
    return ;
}
