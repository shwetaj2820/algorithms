// using 2 pointer approach to find target sum;
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {2,4,3,1,7,11};
    int target_sum = 10 , sum;
    int start = 0 , end = v.size()-1;
    sort(v.begin(),v.end());
    while(start<end){
        sum = v[start] + v[end];
        if(sum == target_sum){
            cout<<v[start]<<" "<<v[end]<<endl;
            break;
        }
        else if(sum>target_sum){
            end--;
        }    
        else{
            start++;
        }
    }
    return 0;
}