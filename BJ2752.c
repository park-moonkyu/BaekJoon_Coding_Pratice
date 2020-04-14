//
//  BJ2752.c
//  Helloworld
//
//  Created by Mooongs on 09/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>


int main(){
    int array[3],i,j, min,tmp,index = 0;
  

    for(i=0;i<3;i++){
        scanf("%d",&array[i]);
        
    }
    
    for(i=0;i<3;i++){
        min=1000000;
        for(j=i;j<3;j++){
            if (min>=array[j]) {
                min=array[j];
           
                index=j;
            }
            
        }
        tmp=array[i];
        array[i]=min;
        array[index]=tmp;
        
    }
    for(i=0;i<3;i++){
        printf("%d\n",array[i]);
    }
}
