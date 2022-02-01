// append vector elements at the end of the vector
#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	vector<int>v = {1,2,3};
	k = v.size();
	for(int i = 0 ; i<k ; i++){
		v.push_back(v[i]);
	}
	for(int i = 0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}
	return 0;
}