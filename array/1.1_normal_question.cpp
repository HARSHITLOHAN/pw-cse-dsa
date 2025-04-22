#include<iostream>
using namespace std;
int main(){/*
//1. given an array of marks of stude,if the marks of any student is less than 35 print its roll no{array id} .
    int arr[8]={56,67,78,54,23,54,34,59};
    for(int i=0;i<=7;i++){
        if(arr[i]<35){               //arr[i]  reresent elemet in array
            cout<<i<<endl;           //i represt index 0 1 2 3 4 5 6 7      
            //i print that index which element is less then 35 if condition mentioned 
        }

    }
*/

/*
//2.if size of a array not given.how to declaration of large element .
    int arr[]={2,3,3,5,23,23,23,23,5,6,3,4,3,4,3,54,34,433,4,3,4,33,4};   //its to large
    //to find size we put arr in another variable divide by its data type size
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
*/

/*
//3. Memory allocation of a array
    int arr[4]={1,2,3,4};
    cout<<&arr[0]<<endl;    //both will give arr[0] address   0x5ffec0
    cout<<arr<<endl;        //both will give arr[0] address   0x5ffec0
    cout<<&arr[1]<<endl;    //print address arr[1] 0x5ffec04
    cout<<&arr[2]<<endl;    //arr[2] 0x5ffec08
    cout<<&arr[3]<<endl;
*/

/*
//4. calculate the sum of given element is an array.

    int arr[6]={4,53,5,74,3,5};
    int sum=0;
    for(int i=0;i<=5;i++){
       sum+=arr[i];
    }
       cout<<sum; */
}
