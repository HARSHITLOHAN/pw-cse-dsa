#include<iostream>
using namespace std;
int main(){
/*
//1. not intialize the size of array so we have to declare the elements
    int arr[]={1,2,3,4,5,6,7};  //work 0-6
    int arsize=sizeof(arr)/sizeof(arr[0]);
    cout<<arsize<<endl;       //7
    cout<<arr[3]<<endl;      //4
*/

/* 
//2. intiaalize declare both
    int ar[5]={2,3,2,4,5};    //0-4
    cout<<arr[4];
*/

/*
//3. initialized 5 size is created of 5 element.
    int ar[5];
    ar[0]=21;
    ar[2]=5;
    cout<<ar[0];      //21
*/

/*
//4. not intialized size also not declared through element start putting value in array;
    int arr[];
    arr[0]=6;
    cout<<arr[0];   //error accred
*/

/*
//5. printing all value of array not one by one but together using loop.
    int arr[6]={2,44,67,7,4,3};
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<endl;
    }
*/

/*
//6. Taking input of each element in an array.
    int arr[7];
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
}*/

}