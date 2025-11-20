#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;

    vector<int>v;
    cout<<"Enter the vector element";
    for(int i=0; i<size; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(int i=0; i<=v.size()-1; i+=2){
        if(i+1 < size){
            swap(v[i],v[i+1]);
        }
    }
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}