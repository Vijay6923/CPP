#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    if(age<12){
        cout<<"child"<<endl;
    }
    else if (age >12 and age <18){
        cout<<"Teenager"<<endl;
        
    }else{
        cout<<"Adult"<<endl;
    }
    return 0;
    
}