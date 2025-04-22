#include<iostream>
using namespace std;
int main(){
    int a=5;
// data_type *pointer_name    data_type will be of that value which we are going to take address
    int *p=&a;
    cout<<&a<<endl;     //0x5ffec4
    cout<<p<<endl;      //0x5ffec4

    float b=5.12;
    float *q=&b;
    cout<<&b<<endl;     //0x5ffec4
    cout<<q<<endl;      //0x5ffec4

    bool c=5;
    bool *r=&c;
    cout<<&c<<endl;
    cout<<r<<endl;

    char d='a';
    char *s=&d;
    cout<<&d<<endl;
    cout<<s<<endl;
}