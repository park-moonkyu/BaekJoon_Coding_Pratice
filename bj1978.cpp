//
//  bj1978.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/07.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>


int main(){
    int count,i,j,enough=0;
    int num[101];
    int realNumber=0;
    scanf("%d",&count);
    
    for(i=0;i<count;i++){
        scanf("%d",&num[i]);
        for(j=1;j<=num[i];j++){
            if(num[i]%j==0){
                enough++;
            }
        }
        if(enough ==2 ){
            realNumber++;
        }
        enough=0;
        }
    printf("%d",realNumber);
}
