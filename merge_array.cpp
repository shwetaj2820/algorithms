// create a sorted and merged array of 2 given arrays
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1 = {2,4,7,9};
    vector<int>v2 = {1,3,5,11,13};
    vector<int>v3; //merged and sorted array
    int ptr1 = 0 , ptr2 = 0;
    while(ptr1<v1.size() || ptr2<v2.size()){
        if(v1[ptr1] < v2[ptr2]){
            v3.push_back(v1[ptr1]);
            ptr1 ++;
        }
        else{
            v3.push_back(v2[ptr2]);
            ptr2 ++;
        } 
    }

    while(ptr1<v1.size()){
        v3.push_back(v1[ptr1]);
    }

    while(ptr2<v2.size()){
        v3.push_back(v2[ptr2]);
    }

    for(int i = 0; i<v3.size() ; i++){
        cout<<v3[i]<<" ";
    }
    return 0;
}