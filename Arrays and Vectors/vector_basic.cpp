#include<iostream>
#include<vector>
using namespace std;

int main(){

	//Vector declare
	vector<int> a;
	vector<int> b(10,4); // elements,initial_val 
	vector<int> c = {1,2,3,4,5};

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

	//Inititally, capcaity = size , later capacity = cap*2;
	//Add 1 element in B , capcaity doubles.
	b.push_back(7);
	cout<<"B after : "<< endl; 
	cout<<"Size : "<<b.size()<<endl;
	cout<<"Capacity : " <<b.capacity()<<endl;
	cout<<endl;	

	//Push values in vector a
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);

	//Print vectors
	cout<<"A :";
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;

	cout<<"B :";
	for(int i : b){
		cout<<i<<"\t";
	}
	cout<<endl;

	cout<<"C :";
	for(int i=0;i<c.size();i++){
		cout<<c[i]<<"\t";
	}
	cout<<endl;

	return 0;
}