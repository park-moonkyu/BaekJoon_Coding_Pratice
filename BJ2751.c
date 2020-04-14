//
//  BJ2751.c
//  Helloworld
//
//  Created by Mooongs on 09/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

void quickSort(int* data,int start,int end){
    if(start>=end)
        return;
    
    int key= start;
    int i=start+1;
    int j=end;
    int tmp;
    
    while(i<=j){
        if(i<=end && data[key]>=data[i]){
            i++;
        }
        if(data[key]<=data[j]&&j>start){
            j--;
        }
        if(i>j){
            tmp=data[j];
            data[j]=data[key];
            data[key]=tmp;
        }else{
            tmp=data[i];
            data[i]=data[j];
            data[j]=tmp;
        }
    }
    quickSort(data,start,j-1);
    quickSort(data,j+1,end);
}
int main(){
    int number;
    int array[1000000];
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        scanf("%d",&array[i]);
    }
    
    quickSort(array,0,number-1);
    
    for(int i=0;i<number;i++){
        printf("%d ",array[i]);
    }
    
}
