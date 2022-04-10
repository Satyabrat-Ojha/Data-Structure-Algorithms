#include<bits/stdc++.h>
using namespace std;

class student{
    
    string name;
    public:
    int age;
    void getname(string s){
        name=s;
    }
    student(){}
    student(string s,int a){
        name=s;
        age=a;
    }
    void printinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    string s="Extreme Satya";
    // a.getname(s);
    // a.age=20;
    // cout<<a.name;
    student a(s,18);
    a.printinfo();
    student b;
    b.getname(s);
    b.age=18;
    b.printinfo();
    return 0;
}