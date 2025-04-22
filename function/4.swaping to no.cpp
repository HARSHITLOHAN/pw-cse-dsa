#include<iostream>
using namespace std;
//this is pass by value (in which code runs inside function only )
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a is "<<a<<endl<<"value of b is "<<b; 
}
int main(){
    int a=5,b=6;
    swap(a,b);
    /*temp=a;
    a=b;
    b=temp;
    cout<<"swap value of a is "<<a<<endl;
    cout<<"swap of b is "<<b<<endl;*/
}