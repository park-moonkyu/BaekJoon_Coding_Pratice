//
//  Stack.cpp
//  Helloworld
//
//  Created by Mooongs on 12/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

class stackk{
     int arr[10];
     int point;
 public:

     stackk()
     {
         for(int i=0; i<10; i++)
             arr[i]=0;
         point=-1;
     }
     stackk(int a)
     {
         for(int i=0; i<10; i++)
             arr[i]=0;
         point=a;
     }
     
     void push(int a)
    {
        point++;
        if(point>=10){ //overflow
            printf("배열범위를 초과하였습니다 !\n");
            point = 9;
        }
        else
        {
            printf("push(%d) point %d\n", a, point);
            arr[point]=a;

        }
    }
    
    void pop()
    {
        if(point<0)
        {
            printf("더 이상 제거할게 없음\n");
            point= -1;
        }
        else
        {
            printf("pop(%d) point %d\n", arr[point], point);
            arr[point]=0; //point 0;
            point--;
        }
            
    }
    
    void print(){
        for(int i=0; i<=point; i++)
        {
            printf("%d,", arr[i]);
        }
        printf("\n");
    }
};

int main(){
    stackk sj;
    sj.push(1);
    sj.push(2);
    sj.push(3);
    sj.push(4);
    sj.push(5);
    sj.push(6);
    sj.push(7);
    sj.push(8);
    sj.push(9);
    sj.push(10);
    
    sj.pop();
    sj.pop();
    sj.pop();
    sj.pop();
    sj.pop();
    
    sj.print();
    printf("\n");
    
    return 0;
}
