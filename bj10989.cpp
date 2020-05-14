//
//  bj10989.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/14.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>
using namespace std;

int a[10001];
int n;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        a[x]++;
    }
    for (int i=0;i<10001;i++){
        while(a[i]!=0){
            printf("%d\n", i);
            a[i]--;
        }
    }
    return 0;
}

