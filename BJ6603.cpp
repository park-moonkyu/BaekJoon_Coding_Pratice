//
//  BJ6603.cpp
//  Helloworld
//
//  Created by Mooongs on 13/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>

int * arr;
int a;

int tmparr[6];

void call(int cura, int tmpa)
{
  if(tmpa == 6)
  {
     for( int i=0; i<6; i++)
      {
          if( i != 0)   printf(" ");
         printf("%d", tmparr[i]);
      }
      printf("\n");
      return;
  }

   for( int i=cura; i<a; i++)
   {
      tmparr[tmpa] = arr[i];
      call( i+1, tmpa+1);
   }
}
int main(){
    a = 0;
    
    while(true)
    {
        scanf("%d",&a);
        
        if( a == 0 )
            break;
        
        arr = new int[a];
        for(int i=0; i<a; i++)
        {
            scanf("%d", &(arr[i]));
        }
        call(0,0);
        /*
        for(int i=0;i<com;i++)
            
        {
            for(int j=0;j<a-b;j++)
            {
                if(j==point){
                    tmp=arr[j+1];
                    printf("%d ",arr[j+1]);
                    
                }else if(tmp==arr[j]){
                printf("%d ",arr[j+1]);
                tmp=arr[j+1];
                }else{
                    printf("%d ",arr[j]);

                }
            }
            point--;
            printf("\n");
        }
        
        */
        
        delete[] arr;
        
        printf("\n");
    }


    return 0;
}


