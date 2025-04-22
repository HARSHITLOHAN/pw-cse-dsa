#include<iostream>
using namespace std;
int main(){
/*
//1.Calculate the product of all the elements in the given array.
    int arr[8]={2,3,4,5,6,7,8,6};
    int prod=1;
    for(int i=0;i<=7;i++){
        prod*=arr[i];
    }
    cout<<prod;
*/

/*
//2. Find the second largest element in the given Array in  (one pass).
    int arr[6]={5,8,3,10,1,9};
    int max=INT_MIN;
    int secmax;
    for(int i=0;i<=5;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }
            if(max>arr[i] && arr[i]>secmax)
            secmax=arr[i];
    }
    cout<<max<<endl;
    cout<<secmax;
*/

/*
//3. Find the minimum value out of all elements in the array.
    int arr[6]={7,3,8,1,9,0};
    int min=INT_MAX;
    for(int i=0;i<=5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
        cout<<min;
*/

/*
//4. Given an array, predict if the array contains duplicates or not.
    
    int arr[6]={2,3,5,7,1,8};
    //int arr[6]={2,8,5,7,1,8};       //duplicate means a single value coming multiple times
    bool duplicate=false;          // flag to track
    for(int i=0;i<=5;i++){
        for(int j=i+1;j<=5;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        //if(duplicate==true)
        //break;
    }
    if(duplicate==true){
    cout<<"arra is dupicate";
    }
    else{
    cout<<"not duplicate";
    }
*/

/*
//5. WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
    int arr[]={1,2,3,5,6,7,8};
    int arrval=sizeof(arr)/4;
    bool flag=false;
    for(int i=0;i<arrval;i++){
    if(arr[i]!=i+1){    // condition arr[i] != i + 1 checks if the element at index i+1 does not
    //match with arr[i]       we take i+1 because i value at first is 0;
    flag=true;
    cout<<i+1;
    break;
    }
    }
    if(flag==false){
        cout<<"no missing element";
    }
*/

//6. Given an array, predict if the array contains duplicates or not if yes remove it.
    int arr[] = {1, 2, 3, 4, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If duplicate element is found
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce the size of the array
                j--; // Check the new element at index j
            }
        }
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}