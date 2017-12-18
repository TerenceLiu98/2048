//
//  printout.c
//  2048
//
//  Created by 刘骏杰 on 11/12/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include "printout.h"
void print()
{
    
    for(int j=0;j<4;++j)
    printf("----");
    printf("\n");
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            printf("|");
            if(map[i][j]){//有数字就打印，没有就打印空格
                if(score<mp[i][j])
                score=mp[i][j];//更新最高分
                printf("%3d",mp[i][j]);
            }else
            printf("   ");
            
        }
        printf("|\n");
        for(int j=0;j<4;++j)
        printf("----");
        printf("\n");
    }
    printf("w : up  s : down  a : left  d : right\n");
    printf("push 'r' to start a new game\npush 'e' to exit game\n");//动作按钮
}
