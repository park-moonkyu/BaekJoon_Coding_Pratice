//
//  BJ2751.c
//  Helloworld
//
//  Created by Mooongs on 16/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

int sort[1000000]={0,};
void merge(int arr[], int s, int middle, int e){
    int i=s; //나누어진 배열중 첫번째배열 시작점
    int j=middle+1; //두번째 배열 시작점
    int k=i; // 합쳐질 배열의 시작점
    
    while(i<=middle && j<=e)// 두개의 배열 중 하나의 배열이 끝나기전까지 반복
    {
        if(arr[i]<=arr[j]){
            sort[k]=arr[i];
            i++;
        }else{
            sort[k]=arr[j];
            j++;
        }
        k++;
    }
    //나머지 하나의 남은 데이터도 삽입
    if(i<=middle){
        for(int g=i;g<=middle;g++){
            sort[k]=arr[g];
            k++;
        }
    }else{
        for(int g=j;g<=e;g++){
                   sort[k]=arr[g];
                   k++;
    }
    
}
    //  정렬된 배열을 삽입
    for(int g=s;g<=e;g++){
        arr[g]=sort[g];
    }
}

void mergeSort(int a[],int s,int e){
    if(s<e){
        //재귀함수의 구현
        int middle=(s+e)/2;
        mergeSort(a, s, middle);
        mergeSort(a, middle+1, e);
        merge(a,s,middle,e);
    }
}
int main(void){
    int number;
    scanf("%d",&number);
    int a[number];
    for(int i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    
    
    mergeSort(a,0,number-1);
    
    for(int i=0;i<number;i++){
        printf("%d\n",a[i]);
    }
    
}
