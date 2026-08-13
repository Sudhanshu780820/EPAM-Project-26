#include<bits/stdc++.h>
using namespace std;
int maxStudent(int N, int B, vector<int>MinSch){
    //N=No. of students
    //B= Budget
    if(N==0 || B==0){
        return 0;
    }
    sort(MinSch.begin(),MinSch.end());
    int count=0;
    int i=0;
    while(MinSch[i]<=B && i<N){
        B-=MinSch[i];
        count++;
        i++;
    }
    return count;
}
