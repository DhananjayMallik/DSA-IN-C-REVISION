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
void moveNegative(vector<int>&a){
    int n = a.size();
    int i=0; 
    int j=n-1;
    while(i < j){
        if(a[i] < 0) i++;
        if(a[j] > 0) j--;
        if(a[i] > 0 && a[j] < 0){
            swap(a[i],a[j]);
            i++,j--;
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
      moveNegative(v);
      display(v);
    return 0;
}