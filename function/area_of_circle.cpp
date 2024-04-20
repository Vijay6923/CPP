#include<iostream>
using namespace std;
float area(int x){
    return 3.14*x*x;
}
float perimeter(int x){
    return 2*3.14*x;
}

int main(){
    int radius;
    cin>>radius;
     float Area=area(radius);
     cout<<Area<<endl;
     float Perimeter= perimeter(radius);
     cout<<Perimeter<<endl;
    return 0;
}