#include<bits/stdc++.h>
using namespace std;
int MaxLearnPoints(int N,vector<int>points){
   
    if(N==1){
        return points[0];
    }else if(N==2){
        return max(points[0],points[1]);
    }
    vector<int>maxP(N);
    maxP[0]=points[0];
    maxP[1]=max(maxP[0],points[1]);
    for(int i=2; i<N; i++){
        maxP[i]=max(maxP[i-1], maxP[i-2]+points[i]);
    }
    return maxP[N-1];
}