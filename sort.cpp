//
//  sort.cpp
//  Helloworld
//
//  Created by Mooongs on 23/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

class Person{
public:
    string name;
    int number;
    Person(string name,int number){
        this->name=name;
        this->number=number;
    }
    //번호가 작은수부터 큰순서로
    bool operator < (const Person &person)
        const {return this->number < person.number;}
    
};

int main(void){
    Person people[]={
        Person("박문규",5),
        Person("박진",3),
        Person("신소민",4),
        Person("조승균",1),
        Person("임선정",2)
    };
    
    sort(people,people+5);
    for(int i=0;i<5;i++){
        cout << people[i].name<<' ';
    }
    return 0;
}
 
