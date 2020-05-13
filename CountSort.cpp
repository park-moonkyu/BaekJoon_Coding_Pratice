//
//  CountSort.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/14.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

int main(){
    int count[6];
    int array[30]={1,3,2,5,4,3,5, 4, 3, 2, 1, 2, 3, 4, 5, 3, 4, 3, 2, 1, 1, 1, 2, 3, 3, 3, 2, 1, 3, 5};
    for (int i=1;i<6;i++){
        count[i]=0;
    }
    
    for(int i=0;i<30;i++){
        count[array[i]]++;
    }
    for(int i=1;i<=5;i++){
        if(count[i] !=0){
            for(int j=0;j<count[i];j++)
                printf("%d ",i);
        }
    }
    return 0;
}
