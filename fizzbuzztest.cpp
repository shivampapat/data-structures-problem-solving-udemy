#include<iostream>
#include<vector>
#include<string>

using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n){
    
    vector<string> ans;
    
    for(int i=1;i<=n;i++){
        if(i%15 == 0){
            ans.push_back("FizzBuzz");
        }
        else if(i%3 == 0){
            ans.push_back("Fizz");
        }
        else if(i%5 == 0){
            ans.push_back("Buzz");
        }
        else{
            ans.push_back(std::to_string(i));
        }
    }
    
    return ans;
    
}

template <typename T>
void print(vector<T> ans){

    cout<<"Vector is :";
    for(T i : ans){
        cout<<i<<"\t";
    }
    cout<<endl;
}

int main(){
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    vector<string> ans = fizzbuzz(n);
    
    print(ans);
    
    return 0;
}