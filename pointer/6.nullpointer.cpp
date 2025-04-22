#include<iostream>
using namespace std;
int main(){
    //null pointer used to terminate loop ,end linklist point at nothing
    /*int *ptr=NULL; //reserved address
    cout<<ptr<<endl;
    int *ptr1='\0';    //'\0' is a null character
    cout<<ptr1;*/
    
//double pointer -->it used to store addresss of a single pointer 
    int x=67;
    int *pt=&x;
    int **p=&pt;
    cout<<x<<endl;                           //it will print value of x
    cout<<pt<<endl;                          //it will print adress of x
    cout<<p<<endl<<endl;                     //it will print address of x

//it will print value of x
    cout<<x<<endl;
    cout<<*pt<<endl;
    cout<<**p<<endl<<endl;

//it will print adress of x
    cout<<&x<<endl;               //address of x
    cout<<pt<<endl;              //address of x
    cout<<*p<<endl<<endl;       //address of pt print
}