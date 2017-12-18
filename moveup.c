//
//  moveup.c
//  2048
//
//  Created by 刘骏杰 on 11/12/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include "moveup.h"
void MoveUp()
{
    bool flag;//标记是否有合法合并点
    for(int i=1;i<4;++i){//因为是向上，所以第一行不考虑
        for(int j=0;j<4;++j){
            if(!map[i][j])//没有数字的点不考虑
            continue;
            flag=false;
            int pos=i;
            for(int k=i-1;k>=0;--k){
                if(!map[k][j]){//可以移动到的空格地址
                    pos=k;
                    continue;
                }
                if((mp[k][j]==mp[i][j])&&(!cal[k][j])){//值相同且没有进行过计算的点
                    mp[k][j]+=mp[i][j];
                    cal[k][j]=true;
                    flag=true;
                    map[i][j]=false;
                }
                else
                break;
            }
            if(!flag){//点更新
                mp[pos][j]=mp[i][j];
                map[i][j]=false;
                map[pos][j]=true;
            }
        }
    }
}
