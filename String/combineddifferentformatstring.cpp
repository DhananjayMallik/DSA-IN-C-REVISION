#include<iostream>
#include<sstream>
using namespace std;
int main(){
    // Combine name + age into a formatted string
    string name = "Dhananjay";
    int age = 21;
    string birthday = "25 November";
    stringstream ss;
    ss << "My name is " << name << " and my age is " << age << " and my birthday is : " << birthday << ".";
    cout<<ss.str();
    return 0;
}
