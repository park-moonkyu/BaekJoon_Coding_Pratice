//
//  BJ2750.c
//  Helloworld
//
//  Created by Mooongs on 09/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

int main(){
    int array[1001],i,j, min,tmp,index = 0,number;
    scanf("%d",&number);

    for(i=0;i<number;i++){
        scanf("%d",&array[i]);
        
    }
    
    for(i=0;i<number;i++){
        min=1000;
        for(j=i;j<number;j++){
            if (min>=array[j]) {
                min=array[j];
           
                index=j;
            }
            
        }
        tmp=array[i];
        array[i]=min;
        array[index]=tmp;
        
    }
    for(i=0;i<number;i++){
        printf("%d\n",array[i]);
    }
}
