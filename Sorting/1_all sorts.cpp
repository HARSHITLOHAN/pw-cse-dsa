#include<iostream>
using namespace std;
int main(){
//selection sort.  (first element swap with minimum element goes on ever i++ next small element)
/*
    int arr[]={7,3,2,5,7,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
       int index=i;
       for(int j=i+1;j<n;j++){
         if(arr[j]<arr[index]){
            index=j;
         }
        }
// Swap the smallest found element with the current element at index i
            swap(arr[i],arr[index]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/


//bubble sort.  (first loop use for pass in 1 pass put max value till last)
//if n elemenet are there passes will be n-1.
/*
int arr[]={7,3,2,5,6,0,9};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){        //every pass i is increase
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
}*/


//insertion sort. (here we will take first element and match 2nd element with its 1st no if smaller
//put its value in first )
/*
int arr[]={7,3,2,5,6,0,9};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    int j=i;
    while(j>=1 && arr[j]<arr[j-1]){
     swap(arr[j],arr[j-1]);
     j--;
    }
 }
 for(int i=1;i<6;i++){
     cout<<arr[i]<<" ";
}
}*/

//or using for loop
/*
int arr[]={7,3,2,5,6,0,9};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i++){
    for(int j=i;j>=0;j--){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        else break;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}*/

