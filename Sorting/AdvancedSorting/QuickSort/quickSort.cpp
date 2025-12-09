/* here we perform Quick Sort : 
1: first find pivot element then place it right position and then perform quick sort*/
#include<iostream>
using namespace std;
int partition(int A[], int lb, int ub){
    int pivot = A[lb]; // Assume first element of the array is my pivot element
    int start = lb;
    int end = ub;
    while(start < end){
        while(A[start] <= pivot){
            start++;
        }
        while(A[end] > pivot){
            end--;
        }
        if(start < end){
            swap(A[start],A[end]);
        }
    }
    swap(A[lb],A[end]);
    return end;

}
void quickSort(int A[], int lb, int ub){
    if(lb<ub){
        int loc = partition(A,lb,ub);
        quickSort(A,lb,loc-1);
        quickSort(A,loc+1,ub);
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int A[n];
    cout<<"Enter the array element";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Before Apply Quick Sort your array element is = ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    quickSort(A , 0 , n-1);

    cout<<"After Apply Quick Sort your array element is = ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}