#include<iostream>
#include<vector>
using namespace std;

int main(){

	int rows = 2;
	int cols = 4;

	//Vector declare
	vector< vector<int>> a;
	vector< vector<int>> b(rows, vector<int>(cols,20));
	vector< vector<int>> c = {{1,2,3}, {4,5,6}, {7,8,9,10} };


	//Print vector size
	cout<<"A : "<< endl; 
	cout<<"Size : "<<a.size()<<endl;
	cout<<"Capacity : " <<a.capacity()<<endl;
	cout<<endl;	

	cout<<"B : "<< endl; 
	cout<<"Size : "<<b.size()<<endl;
	cout<<"Capacity : " <<b.capacity()<<endl;
	cout<<endl;	

	cout<<"C : "<< endl; 
	cout<<"Size : "<<c.size()<<endl;
	cout<<"Capacity : " <<c.capacity()<<endl;
	cout<<endl;	

	//Inititally, capcaity = size of rows , later capacity = cap*2;
	//Add 1 element in B , capcaity doubles.
	vector<int> temp;
	temp.push_back(5);
	b.push_back(temp);
	cout<<"B after : "<< endl; 
	cout<<"Size : "<<b.size()<<endl;
	cout<<"Capacity : " <<b.capacity()<<endl;
	cout<<endl;	

	//Push values in vector a
	for(int i=0;i<3;i++){
		vector<int> v;
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);	
		a.push_back(v);
	}
	

	//Print vectors
	cout<<"A :"<<endl;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[i].size();j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
	cout<<endl;

	cout<<"B :"<<endl;
	for(vector<int> v : b){
		for(int i : v)
			cout<<i<<"\t";
		cout<<endl;
	}
	cout<<endl;

	cout<<"C :"<<endl;
	for(int i=0;i<c.size();i++){
		for(int j=0;j<c[i].size();j++)
			cout<<c[i][j]<<"\t";
		cout<<endl;
	}
	cout<<endl;

	return 0;
}