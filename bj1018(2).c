//
//  bj1018(2).c
//  Helloworld
//
//  Created by Mooongs on 20/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
 
 
 
int main() {
    int a = 0; // y좌표
    int b = 0; // x좌표
    int count = 2501;
    int tempt = 0;
 
    scanf("%d %d", &a, &b);
 
 
    char** arr = (char**)calloc(a, sizeof(char*));
    for (int i = 0; i < a; i++) {
        arr[i] = (char*)calloc(b, sizeof(char));
    }
 
    char** brr = (char**)calloc(8, sizeof(char*));
    for (int i = 0; i < 8; i++) {
        brr[i] = (char*)calloc(8, sizeof(char));
    }
 
 
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf(" %c", &arr[i][j]);
        }
 
    }
 
    for (int i = 0; i + 7 < a; i++) {
        for (int j = 0; j + 7 < b; j++) {
            for (int k = 0; k < 8; k++) {
                for (int h = 0; h < 8; h++) {
                    brr[k][h] = arr[i + k][j + h];
                }
            }
 
            int tempt1 = 0;
            int tempt2 = 0;
 
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if ((i + j) % 2 == 0 && brr[i][j] == 'W') {
                        tempt1++;
                    }
                    else if ((i + j) % 2 != 0 && brr[i][j] == 'B') {
                        tempt1++;
                    }
                }
            }
 
 
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if ((i + j) % 2 == 0 && brr[i][j] == 'B') {
                        tempt2++;
                    }
                    else if ((i + j) % 2 != 0 && brr[i][j] == 'W') {
                        tempt2++;
                    }
                }
            }
 
            if (tempt1 > tempt2) {
                tempt = tempt2;
            }
            else {
                tempt = tempt1;
            }
 
            if (count > tempt) {
                count = tempt;
            }
            tempt = 0;
        }
 
 
    }
 
 
    printf("%d", count);
 
}
