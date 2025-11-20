#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void sort0And1(vector<int>&v){
    int n = v.size();
    int i=0;
    int j = n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
            i++,j--;
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the vector element : ";
    for(int i=0; i<=n-1; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    display(v);
    sort0And1(v);
    cout<<endl;
    display(v);
    return 0;
}