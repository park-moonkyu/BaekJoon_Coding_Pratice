//
//  vector.cpp
//  Helloworld
//
//  Created by Mooongs on 24/04/2020.
//  Copyright © 2020 Mooongs. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string,pair<int,int>>a,pair<string,pair<int,int>>b){
    if(a.second.first==b.second.first){
        return a.second.second<b.second.second;
    }else{
       return a.second.first>b.second.first;
    }
};

int main(){
    vector <std::pair <string, pair<int,int>>> v;
    v.push_back(pair <string, pair<int,int>>("박문규",make_pair(182,26)));
       v.push_back(pair <string, pair<int,int>>("신소민",make_pair(173,26)));
        v.push_back(pair <string, pair<int,int>>("조승균",make_pair(173,25)));
        v.push_back(pair <string, pair<int,int>>("박진",make_pair(167,28)));
        v.push_back(pair <string, pair<int,int>>("임선정",make_pair(165,21)));
    sort(v.begin(),v.end(),compare);
    
    
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<' ';
    }
    
    return 0;
}
