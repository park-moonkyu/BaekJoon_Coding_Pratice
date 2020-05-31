//
//  Kraskal2.cpp
//  Helloworld
//
//  Created by Mooongs on 2020/05/31.
//  Copyright © 2020 Mooongs. All rights reserved.
//

#include <algorithm>
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

//부모 노드를 가져옴
int getParent(int set[],int x){
    if(set[x]==x) return x;
    return set[x]=getParent(set,set[x]);
}

//부모 노드를 병합
void unionParent(int set[], int a, int b){
    a=getParent(set, a);
    b=getParent(set, b);
    //더 숫자가 작은 부모로 병합
    if(a<b) set[b]=a;
    else set[a]=b;
}

//같은 부모를 가지는지 확인
int find(int set[], int a, int b){
    a=getParent(set, a);
    b=getParent(set, b);
    if(a==b) return 1;
    else return 0;
}

//간선 클래스 선언
class Edge{
public:
    int node[2];
    int distance;
    Edge(int a,int b,int distance){
        this->node[0]=a;
        this->node[1]=b;
        this->distance=distance;
    }
   bool operator <(const Edge &edge) const {
        return this->distance < edge.distance;
    }
};

int main(void)
{
    int n=7;
    vector<Edge> v;
    v.push_back(Edge(1,7,12));
    v.push_back(Edge(1,4,28));
    v.push_back(Edge(1,2,67));
    v.push_back(Edge(1,5,17));
    v.push_back(Edge(2,4,24));
    v.push_back(Edge(2,5,62));
    v.push_back(Edge(3,5,20));
    v.push_back(Edge(3,6,37));
    v.push_back(Edge(4,7,13));
    v.push_back(Edge(5,6,45));
    v.push_back(Edge(5,7,73));

    sort(v.begin(),v.end());
    //각 정점이 포함된 그래프가 어디인지 저장
    int set[n];
    for(int i=0;i<n;i++){
        set[i]=i;
    }


//거리의 합을 0으로 초기화
int sum=0;

for(int i=0;i<v.size();i++)
{
    //동일 부모를 가르키지 않는 경우, 즉 사이클이 발생하지않을때만 선택
    if(!find(set,v[i].node[0]-1,v[i].node[1]-1)){
        sum+=v[i].distance;
        unionParent(set,v[i].node[0]-1,v[i].node[1]-1);
        
    }
}
printf("%d",sum);
};
