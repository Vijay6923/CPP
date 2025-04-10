#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int roll;
    float percentage;
    Student(string n,int r,float p){
        this->name=n;
        this->roll=r;
        this->percentage=p;
    }

};
void change(Student* s){
    s->name="yash";

}
int main(){
    Student* s = new Student("Vijay",128,76.8);
    // s.name="Vijay";
    // s.percentage=76.8;
    // s.roll=128;
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;

}