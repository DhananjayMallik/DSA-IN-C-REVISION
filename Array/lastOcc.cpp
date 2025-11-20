#include<iostream>
#include<vector>
using namespace std;
int main(){
    // declaration of vector
    vector<int>v;
    cout<<"Enter the vector element : " << endl;
    for(int i=0; i<6; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    int x;
    cout<<"Enter you Occurence number : " << endl;
    cin>>x;
    int idx = -1;
    for(int i=0; i<=v.size()-1; i++){
        if(v[i] == x){
            idx = i;
        }
    }
    cout <<"Last Occurence of that number you provided is = " << idx;
    return 0;
}