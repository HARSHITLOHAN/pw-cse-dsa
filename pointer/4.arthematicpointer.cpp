#include<iostream>
using namespace std;
int main(){/*
    int a=9;
    int *ptr=&a;
    cout<<ptr<<endl;     //0x5ffe94
    ptr++;  //pointer is incresend by 1 means adress is changed will be 4bits away becuase int take 4 bite. depend on data type
    cout<<ptr;           //0x5ffe98   ptr used to take address
*/

/*
    int a=9;
    int *ptr=&a;
    cout<<*ptr<<endl;     //it take direct value of a 9
    (*ptr)++;             //and increment by 1 a value is changed to 10 without intiliszing a again;
    cout<<*ptr;        //output 10
*/

/*
    int a=10;
    int *ptr=&a;          //if we have printed after this line a would be same=10;
    int b=++(*ptr);       //first increment then write value a=10 ++ a=11 
    cout<<a<<"  "<<b;     //11    11
*/

    int a=10;
    int *ptr=&a;
    cout<<a<<endl;        //print the value of a. 10
    int b=++(*ptr);       //first increment then write value a=10 ++ a=11 
    cout<<a<<"  "<<b;     //11  11
}
