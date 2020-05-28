//
//  dfs.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/28.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>
#include <stack>
#include <iostream>
#include <vector>

using namespace std;

int checked[8];
vector<int> a[8];

void dfs(int start){
    if(checked[start]) return;
    checked[start]=true;
    cout<< start <<' ';
    for(int i=0;i<a[start].size();i++){
        int y=a[start][i];
        dfs(y);
    }
}
int main(){
    a[1].push_back(2);
    a[2].push_back(1);
    
    a[1].push_back(3);
    a[3].push_back(1);
    
    a[2].push_back(3);
    a[3].push_back(2);
    
    a[2].push_back(4);
    a[4].push_back(2);
    
    a[2].push_back(5);
    a[5].push_back(2);
    
    a[3].push_back(6);
    a[6].push_back(3);
    
    a[3].push_back(7);
    a[7].push_back(3);
    
    a[4].push_back(5);
    a[5].push_back(4);
    
    a[6].push_back(7);
    a[7].push_back(6);
    
    dfs(1);
    return 0;
    
}
