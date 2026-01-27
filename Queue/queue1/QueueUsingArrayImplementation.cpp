#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Queue{
    public : 
    int b; // back
    int f; // front
    int s; // size
    vector<int>arr;
    Queue(int val){
        b = 0;
        f = 0;
        s = 0;
        vector<int>v(val);
        arr = v;
    }
    void push(int val){
        if(b == arr.size()){
            cout<<"O/F" << endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop(){
        if(s == 0){
            cout<<"U/F"<<endl;
        }
        f++;
        s--;
    }
    int front(){
        if(s == 0){
            cout<<"U/F"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s == 0){
            cout<<"U/F"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return s;
    }
    void display(){
        for(int i=f; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
   Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60); 
    q.display();
    q.pop();
    q.display();
    cout<<"Front is : " << q.front()<<endl;
    cout<<"Back is : " << q.back()<<endl;
    cout<<"Size of the queue is : " << q.size()<<endl;
    return 0;
}