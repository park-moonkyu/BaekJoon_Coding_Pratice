//
//  InsertSort.c
//  Helloworld
//
//  Created by Mooongs on 08/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>
int main(){
    int i,j,tmp;
    int array[10]={1,10,5,8,7,6,4,3,2,9};
    
    for(i=0;i<10;i++){
    printf("%d,",array[i]);
    }
    printf("\n");
    
    for(i=0;i<9;i++){
        j=i;
            while(array[j]>array[j+1]){
                tmp=array[j+1];
                array[j+1]=array[j];
                array[j]=tmp;
                j--;
                if(j<0)
                    break;
        }
    }
    
   for(i=0;i<10;i++){
    printf("%d,",array[i]);
    }
    
    return 0;
}
