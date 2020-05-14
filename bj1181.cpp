//
//  bj1181.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/14.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <algorithm>
#include <iostream>

using namespace std;

string a[20000];
int n;

bool compare(string c, string b){
    if (c.length()<b.length()){
        return 1;
    }else if(c.length()>b.length()){
        return 0;
    }
    else {
        return c<b;
    }
}
 
int main(){
    cin >> n;
    for(int i=0;i <n;i++){
        cin>> a[i];
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        if(i>0&& a[i]==a[i-1]){
            continue;
        }else
            cout << a[i] <<'\n' ;
        

    }
    return 0;
}
