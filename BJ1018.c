//
//  BJ1018.c
//  Helloworld
//
//  Created by Mooongs on 20/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

char ** arr;

int chass(int hang,int yeol){ //다시 칠하기 함수
    int even=0;
    int odd=0;
    
  
    for(int i=0;i<8;i++){
        // 행렬차수의 합이 짝수부분이면 흑, 홀수면 백 이 아니면 칠하기
        for(int j=0;j<8;j++){
            if((i+j)%2==1 && arr[hang+i][yeol+j]=='B')
                even++;
            if((i+j)%2==0 && arr[hang+i][yeol+j]=='W')
                even++;
        }
    }
    
    for(int i=0;i<8;i++){
        // 행렬차수의 합이 짝수부분이면 백, 홀수면 흑 이 아니면 칠하기
          for(int j=0;j<8;j++){
              if((i+j)%2==0 && arr[hang+i][yeol+j]=='B')
                  odd++;
              if((i+j)%2==1 && arr[hang+i][yeol+j]=='W')
                  odd++;
          }
    }
        if(odd<=even)
            return odd;
        else
            return even;
        
      
}
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int min=64;
    arr=(char **)calloc(n,sizeof(char*));
    for(int i=0;i<n;i++){
        arr[i]=(char *)calloc(m,sizeof(char));
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c",&arr[i][j]);
        }
    }
    
    
    for(int i=0;i+7<n;i++){
        for(int j=0;j+7<m;j++){
            int sub=chass(i,j);
            if(sub<min)
                min=sub;
            
        }
    }
        
   
    
    printf("%d",min);
    return 0;
}

