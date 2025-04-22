#include<iostream>
using namespace std;
//1. find first and last digit of a number;
void firstlast(int a,int *last,int *first){
    *last=a%10;              //remainder find
    while(a>9){
    a=a/10;                  //quotient
    }
    *first=a;     //find all but value put outside loop only one inside put many
    return;
}
int main(){
    int a,last,first;
    cin>>a;
    /*last=a%10;
    cout<<last<<endl;
    while(a>9){
    a=a/10;
    }
    cout<<a;*/

//using function pointer finding first and last digit
    int *ptr1=&last;
    int *ptr2=&first;
    firstlast(a,ptr1,ptr2);
    cout<<first<<" "<<last;
}