#include<iostream>
using namespace std;
int main(){
//1.Write a program to find the product of two numbers using pointers.
/*  int a=10,c;
    int *ptr=&a;
    int b=15;
    int *ptr1=&b;
    c=(*ptr) * (*ptr1);
    cout<<c<<endl;                     //till here *ptr,*ptr1 value is same.
    
    *ptr=5;                            //from here we have assigned new values.
    *ptr1=6;
    c=(*ptr) * (*ptr1);
    cout<<c<<endl;
}*/

/*
//2.int *p, q;             
here*p pointer and q is a integer to avoid confusion we assign value in defferent line.
*/

/*
//3.Find the output of the following code snippet.
 int a = 10, b = 20;
 int *ptr = &a;                               //ptr store address of a
 b = *ptr + 1;                                //b=>a+1=11
 ptr = &b;                                    //ptr new address stored of b
 cout << *ptr << " " << a << " " << b;        //11 10 11
*/

/*
 //4.
 int a = 15, b = 20;
 int *ptr = &a;
 int *ptr2 = &b;
 *ptr = *ptr2;      //a gets the value of b
*/

/*
 //5.
 int a = 10, b = 20;
 int *ptr;
 *ptr = 5;

The program is correct and will compile but might result in runtime error.This is 
because ptr will have a garbage address which might even point to a location which 
does not belong to our program and hence might result in Segmentation Fault when we 
are trying to access it.
*/