//
//  heap.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/06.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

int number=9;
int heap[9]={8,7,6,4,5,3,9,1,2};

int main(){
    for(int i=1;i<number;i++){
        int c=i;
        do{
            int root=(c-1) /2;
            if(heap[root]<heap[c]){
                
                int temp=heap[root];
                heap[root]=heap[c];
                heap[c]=temp;
        }
        c=root;
    }while(c!=0);
    }
    for (int i=number-1;i>=0;i--){
        int temp=heap[0];
        heap[0]=heap[i];
        heap[i]=temp;
        int root=0;
        int c=1;
        do{
            c=2*root+1;
            //자식 중에 더 큰 값 찾기
            if(c<i-1&&heap[c]<heap[c+1]){
                c++;
            }
            if(c<i&& heap[root] <heap[c]){
                temp=heap[root];
                heap[root]=heap[c];
                heap[c]=temp;
            }
            root=c;
        }while(c<i);
    }
    for(int i=0;i<number;i++){
        printf("%d ", heap[i]);
    }
    return 0;
}
