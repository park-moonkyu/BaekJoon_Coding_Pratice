//
//  queue.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/27.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>
#include <queue>
#include <iostream>

using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.push(6);
    q.push(7);
    q.pop();
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
    
}
