//
//  BubbleSort.c
//  Helloworld
//
//  Created by Mooongs on 05/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>
int main(){
    int array[10]={5,8,7,6,4,2,3,10,1,9};
    int j,i,tmp;
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            //9-i인 이유는 버블소트는 바로옆에있는 수를 비교해줄때 바로밑에 식은 array[8]만있어도 array[9]까지 비교가 가능하고 i=0일때 가장 큰수가 array[9]에 가므로 9라고해줘야지 데이터측면에서 가장 효율적인 연산을 할수있다.
            if(array[j]>array[j+1]){
                tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
    
    for(int i=0;i<10;i++){
           printf("%d ",array[i]);
       }
    return 0;
}
