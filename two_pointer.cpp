//find two elements from an array with sum=target sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int target_sum = 10 ;
    int set = 0; //used to confirm condition is met
    vector<int>v = {2,4,3,1,7,11};

    //brute force approach : O(n^2)

    for(int i = 0 ; i<v.size()-1 ; i++){
        for(int j = 1 ; j<v.size()-1 ; j++){
            if((v[i]+v[j])==target_sum){
                cout<<v[i]<<" "<<v[j];
                set = 1;
            }
        }
        if (set==1) break;
    }
    return 0;
}