#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,6,3,9,7,11};
    int target_sum = 13;
    int start = 1 , end = v.size()-1;
    int set=0;

    sort(v.begin(),v.end());

    for(int i = 0 ; i<v.size()-1 ; i++){
        int temp_target_sum = target_sum - v[i];
        while(start<end){
            int sum = v[start] + v[end];
            if(sum == temp_target_sum){
                cout<<v[i]<<" "<<v[start]<<" "<<v[end]<<endl;
                set=1;
                break;
            }
            else if(sum>temp_target_sum){
                end--;
            }
            else{
                start++;
            }
        }
        if(set==1) break;
    }
    return 0;

}