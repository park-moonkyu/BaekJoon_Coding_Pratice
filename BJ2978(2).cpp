//
//  seonjung.c
//  Helloworld
//
//  Created by Mooongs on 19/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//


#include <stdio.h>

int * arr;

int tmparr[3];

int n; //카드의 개수
int m; //딜러가 외친 숫자
int max;

void call(int cura, int tmpa)
{
  if(tmpa == 3)
  {
      int sum=0;
      for( int i=0; i<3; i++)
      {
          sum += tmparr[i];
      }
      if(sum <= m && sum > max)
          max = sum;
      return;
  }

   for( int i=cura; i<n; i++)
   {
      tmparr[tmpa] = arr[i];
      call( i+1, tmpa+1);
   }
}

int main(){
    scanf("%d",&n);
    scanf("%d",&m);
    
    arr = new int[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    max = 0;
    call(0, 0);
    
    printf("%d", max);
    delete[] arr;
    return 0;
}
