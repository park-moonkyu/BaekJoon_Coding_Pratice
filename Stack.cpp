//
//  stack.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/27.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> s;
    s.push(7);
    s.push(6);
    s.push(3);
    s.pop();
    s.push(2);
    s.push(9);
    s.pop();
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
