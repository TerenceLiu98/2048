//
//  gameover.c
//  2048
//
//  Created by 刘骏杰 on 11/12/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include "gameover.h"
bool gameover()
{
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            if(!map[i][j])//任意一点为空，游戏继续
            return false;
            if(i>0){
                if(mp[i-1][j]==mp[i][j])//任意两个相邻的单元值相同，游戏继续
                return false;
            }
            if(j>0)
            if(mp[i][j-1]==mp[i][j])
            return false;
        }
    }
    return true;
}
