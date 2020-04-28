//
//  QuickSort.c
//  Helloworld
//
//  Created by Mooongs on 08/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

void quickSort(int *data,int start, int end){
    if(start>=end){//원소가 한개일 경우 그대로 두기
        return;
    }
    int key= start; //첫번째 원소
    int i= start+1;
    int j= end;
    int tmp;
    
    while(i<=j){//엇갈릴때까지 반복
        while( i<=end && data[i]<=data[key]){
          i++;
      }
        while(data[j]>=data[key]&&j>start){
            j--;
        }
        if(i>j){ //현재 엇갈리 상태면 키값과 교체
            tmp=data[j];
            data[j]=data[key];
            data[key]=tmp;
        }else{ //엇갈리지 않았다면 i 와 j 교체
            tmp=data[j];
            data[j]=data[i];
            data[i]=tmp;
        }
        
    }
    
    quickSort(data,start,j-1);
    quickSort(data,j+1,end);
}
int main(){
   
    int array[10]={4,2,3,6,5,1,8,9,10,7};
    
    quickSort(array,0,9);
    
    for(int i=0;i<10; i++){
        printf("%d ",array[i]);
    }
        

    return 0;
}
