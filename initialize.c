//
//  initialize.c
//  2048
//
//  Created by 刘骏杰 on 11/12/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include "initialize.h"
void Init()
{
    srand(time(NULL));
    int x,y,v,now=0;
    for(int i=0;i<4;++i)
    for(int j=0;j<4;++j)
    if(!map[i][j])
    now++;//统计还有多少空格
    if(now==0)//没有空格就不需要加点
    return;
    int cnt=rand()%now,n=0;//随机在第n个空白点
    bool flag=false;
    for(int i=0;i<4;++i){
        flag=false;
        for(int j=0;j<4;++j)
        if(!map[i][j]){
            if(cnt==n){
                x=i;
                y=j;
                flag=true;
                break;
            }else
            n++;
        }
        if(flag)
        break;
    }
    v=rand()%2;
    if(v)//两种情况
    v=4;
    else
    v=2;
    mp[x][y]=v;
    map[x][y]=true;
}
