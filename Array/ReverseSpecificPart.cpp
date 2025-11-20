#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<< a[i] <<" ";
    }
}
void reversePart(int i, int j, vector<int>&v){
    while(i <= j){
        swap(v[i],v[j]);
        i++,j--;
    }
    return;
}
int main(){
    vector<int>v;
    cout<<"Enter the vector element :";
    for(int i=0; i<7; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    display(v);
    reversePart(1,4,v);
    cout<<endl;
    display(v);
    return 0;
}