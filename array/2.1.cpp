#include<iostream>
using namespace std;
/*
//1.array use pass by refrence 
void func(int ar[],int n){   //here ar is pointer pointing to arr address  
   for(int i=0;i<n;i++){
    cout<<ar[i];
   }
   cout<<endl;
}

void change(int ar[]){
    ar[2]=6;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    func(arr,n);               //direct address is passing in arr no & we use
    change(arr);
    func(arr,n);
}*/

/*
//2.as soon as pointer get adress of arr ponter has power to do everything with array 
int main(){
int arr[]={1,2,3,4,5};
int *ptr=&arr[0];       //pointer pointing to address of arr[0]
int *pt=arr;            //1st element address will store.
cout<<pt<<endl;         //print address of 0  element
cout<<pt[1]<<endl;     //it will print value at index 1 ==>   2  .
pt[0]=34;              //changing value at index 0
*pt=8;                 //changing value at index 0
for(int i=0;i<=4;i++){
    cout<<ptr[i];          
}
cout<<endl;
}*/

/*int main(){
//3.array could print like this also.
    int arr[]={1,2,3,4,5,6};
    int *ptr=arr;                //1st element adress store
    for(int i=0;i<=5;i++){
        cout<<*ptr;    //1st element print
        ptr++;         //moving the pointer to next element of array.
    }
    ptr=arr;             //again intialise as ptr index pinting 6th element not present
    cout<<endl;
    *ptr=8;                   //index 0 value is updated 8
    ptr++;                    //index++ means index 1;
    *ptr=9;                   //index 1 value is 9;
    ptr--;                    //index 1 again -- means again index is updated to 0;
    *ptr=arr;
    for(int i=0;i<=5;i++){
        cout<<*ptr;    
}
}*/