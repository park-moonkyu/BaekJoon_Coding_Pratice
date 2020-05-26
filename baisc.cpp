//
//  baisc.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/20.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;


int main(){
    cout << "hi"<< "\n" << "bye";
    int count[30];
    for(int i=0;i<30;i ++){
        sort(count,count+30);
        cout<<"\n";
        
        cout << count[i];
    }
    return 0;
}

class person{
public:
    string name;
    int number;
    person(string name,int number){
        this->name=name;
        this->number=number;
    }
    bool operator < (Person &person){
        return this->number<person ,
    }
}
