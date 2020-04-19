//
//  BJ2798.c
//  Helloworld
//
//  Created by Mooongs on 19/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

int min;

int main(){
    int n; //카드의 개수
    int m; //딜러가 외친 숫자
    scanf("%d",&n);
    scanf("%d",&m);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //m 보다 작은수를 min 에 넣는다.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<=m && min<sum)
                    //min보다 현재의 sum이 더 m 에 가까운지 비교.
                    min=sum;
            }
        }
    }
    
    printf("%d",min);

    return 0;
}


