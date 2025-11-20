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
    cout<< "Enter the array element within vector" << endl;
    for(int i=0; i<7; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout << "Enter the kth element" <<endl;
    cin>>k;
    int n = v.size();
    display(v);
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    cout<<endl;
    if(k>n) k=k%n;
    display(v);
    return 0;
}
