#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort012(vector<int>&v){
    int n = v.size();
    int lo = 0;
    int mid = 0;
    int hi = n-1;
    while(mid <= hi){
        if(v[mid]==2){
            swap(v[mid],v[hi]);
            mid++,hi--;
        } else if(v[mid]==0){
            swap(v[lo],v[mid]);
            lo++,mid++;
        } else{
            mid++;
        }
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> v;
    cout << "Enter the vector element : ";
    for (int i = 0; i <= n - 1; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }
    display(v);
    sort012(v);
    display(v);
    return 0;
}