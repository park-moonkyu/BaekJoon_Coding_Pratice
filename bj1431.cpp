//
//  bj1431.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/14.
//  Copyright © 2020 Mooongs. All rights reserved.
//


#include <algorithm>
#include <iostream>

using namespace std;

string a[1000];
int n;

int getSum(string a){
    int length=a.length();
    int sum=0;
    for(int i=0;i<length;i++){
        //숫자인 경우에만 Sum을 해준다.
        if(a[i]-'0'<=9 && a[i]-'0' >=0)
            sum+=a[i]-'0';
    }
    return sum;
}
bool compare(string c, string b){
    if (c.length()<b.length()){
        return 1;
    }else if(c.length()>b.length()){
        return 0;
    }
    else {
        int cSum= getSum(c);
        int bSum= getSum(b);
        
        if(cSum !=bSum){
            return cSum<bSum;
        }else{
            return c<b;
        }
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
