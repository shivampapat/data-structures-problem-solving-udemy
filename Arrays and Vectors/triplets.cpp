#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void FindTriplets(vector<int> v, int target){

	sort(v.begin(),v.end());

	for(int i=0;i<v.size()-2;i++){

		int temp = target-v[i];

		for(int j=i+1,k=v.size()-1;j<k;){
			int other = v[j]+v[k];
			if(temp == other){
				cout<<v[i]<<"\t" <<v[j]<<"\t" <<v[k]<<endl;
				
				//Want distinct elements so skip same elements
				while(j<k && v[j]==v[j+1])
					j++;

				while(k>j && v[k]==v[k-1])
					k--;
			}
			if(other > temp)
				k--;
			else
				j++;
		}
	}
}


int main(){

	int n;
	cin>>n;

	vector<int> v;

	for(int i=0;i<n;i++){
		int temp = 0;
		cin>>temp;
		v.push_back(temp);
	}

	cout<<endl;

	int sum = 0;
	cin>>sum;

	FindTriplets(v,sum);
	cout<<endl;
	return 0;
}