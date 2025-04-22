#include<iostream>
using namespace std;
//1.when calling func address is passed of a variable in function pointer take it  
/*void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main(){
int a=9,b=5;
swap(&a,&b);
cout<<"a "<<a<<" "<<"b "<<b;  //cout<<"value of a is "<<a<<endl<<"value of b is "<<b; 

}*/

/*
//2.here directly address of same variable is put inside function.
  void swap(int &a,int &b){
  int temp = a;
  a=b;
  b=temp;
}
int main(){
int a=5,b=7;
swap(a,b);
cout<<a<<" "<<b;
}*/

//in pointer and pass by value in function no need to return we can use void here.