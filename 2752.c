//
//  2752.c
//  Helloworld
//
//  Created by Mooongs on 13/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

int main(){
    int array[3],i,j,tmp,max=3;
    
    for(i=0;i<3;i++){
        scanf("%d",&array[i]);
    }
    //버블정렬을 생각해보자
    for(i=0;i<3;i++){
        for(j=0;j<max-1;j++){
            if(array[j]>array[j+1]){
                tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
        max--;
    }
    
    for(i=0;i<3;i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}
