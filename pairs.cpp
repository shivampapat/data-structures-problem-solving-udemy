#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void FindPair(vector<int> v, int target){

	unordered_set<int> numbers;

	for(int i=0;i<v.size();i++){

		int temp = target-v[i];
		if(numbers.find(temp) != numbers.end()){
			cout<<v[i] <<"  "<<temp;
			break;
		}
		numbers.insert(v[i]);
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

	FindPair(v,sum);
	cout<<endl;

	return 0;
}