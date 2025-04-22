#include<iostream>
using namespace std;
int main(){
/*  int a=12,b=8;
    int *p=&a;
    cout<<a<<endl;         //12
    cout<<*p;             //12
*/

/*
//*p (derefrence pointer) can change the current value of x without writing x 
//again or intialising value of x
    int a=12,b=8;
    int *p=&a;
    *p=5;
    cout<<a;*/             //5

/*
//sum of two numbers
    int *p=&a;           
    int *p2=&b;
    int sum=*p+*p2;        //12+8=20
    cout<<sum;*/ 

/*
//take input c and d  then give there sum*/
    int c,d;
    int *p=&c;
    cout<<"value of c is ";
    cin>>*p;               //intitialize value of p  means c 

    int *p1=&d;
    cout<<"value of d is ";
    cin>>*p1;              //initialize *p1   means d

    cout<<"sum of c and d is "<<c+d<<endl;          //*p+*p1=
    cout<<"derefrence value will be also value of c+d "<<*p+*p1;
}