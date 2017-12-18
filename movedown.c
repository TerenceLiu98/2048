//
//  movedown.c
//  2048
//
//  Created by 刘骏杰 on 11/12/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include "movedown.h"
void MoveDown()
{
    bool flag;
    for(int i=2;i>=0;--i){
        for(int j=0;j<4;++j){
            if(!map[i][j])
            continue;
            flag=false;
            int pos=i;
            for(int k=i+1;k<4;++k){
                if(!map[k][j]){
                    pos=k;
                    continue;
                }
                if((mp[k][j]==mp[i][j])&&(!cal[k][j])){
                    mp[k][j]+=mp[i][j];
                    cal[k][j]=true;
                    flag=true;
                    map[i][j]=false;
                }
                else
                break;
            }
            if(!flag){
                mp[pos][j]=mp[i][j];
                map[i][j]=false;
                map[pos][j]=true;
            }
        }
    }
}
