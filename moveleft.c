//
//  moveleft.c
//  2048
//
//  Created by 刘骏杰 on 11/12/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include "moveleft.h"
void MoveLeft()
{
    bool flag;
    for(int i=0;i<4;++i){
        for(int j=1;j<4;++j){
            if(!map[i][j])
            continue;
            flag=false;
            int pos=j;
            for(int k=j-1;k>=0;--k){
                if(!map[i][k]){
                    pos=k;
                    continue;
                }
                if((mp[i][k]==mp[i][j])&&(!cal[i][k])){
                    mp[i][k]+=mp[i][j];
                    cal[i][k]=true;
                    flag=true;
                    map[i][j]=false;
                }
                else
                break;
            }
            if(!flag){
                mp[i][pos]=mp[i][j];
                map[i][j]=false;
                map[i][pos]=true;
            }
        }
    }
}

