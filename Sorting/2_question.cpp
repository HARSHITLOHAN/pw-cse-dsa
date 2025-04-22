#include<iostream>
using namespace std;
int main(){
/*
//1.question saying rotate a  array position in clock wise direction where n=5 
//and a[]={1,2,3,4,5} output={5,1,2,3,4}

int arr[]={7,3,2,5,6,0,9};
int n=sizeof(arr)/sizeof(arr[0]);
int b[n];               //new array created
b[0]=arr[n-1];          //b[0]  element fill with arr last element
for(int i=1;i<n;i++){
    b[i]=arr[i-1];       //this happening b[1] = a[0]
}
cout << "Rotated array: ";
for (int i = 0; i < n; i++) {
    cout << b[i] << " ";
}
return 0;
}*/

/*
//2.Given an array of car numbers car[], an array of penalties fine[], and an integer value 
date. The task is to find the total fine which will be collected on the given date. The fine 
is collected from odd-numbered cars on even dates and vice versa.
Examples:
Input: date = 12, car[] = [2375, 7682, 2325, 2352], fine[] = [250, 500, 350, 200]
Output: 600
Explanation: The date is 12 (even), so we collect the fine from odd-numbered cars. 
The odd-numbered cars and the fines associated with them are as follows:
2375 -> 250
2325 -> 350
The sum of the fines is 250+350 = 600

int car[] = {2375, 7682, 2325, 2352};
int n=sizeof(car)/sizeof(car[0]);
int fine[] = {250, 500, 350, 200};
int f=sizeof(fine)/sizeof(fine[0]);
int date;
cout<<"enter the date ";
cin>>date;
int sum=0;
for(int i=0;i<n;i++){
    if(date%2==0 && car[i]%2==1){
        sum+=fine[i];            //assigning fine index;
    }
    if(date%2==1 && car[i]%2==0){
        sum+=fine[i];
    }
}
cout<<sum;
}*/

/*print union of array.

    int arr1[] = {2, 4, 3};
    int arr2[] = {3, 5, 4};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    // Step 1: Create 3rd array of size n + m
    int unionArr[n + m];
    // Step 2: Copy elements of arr1
    for (int i = 0; i < n; i++) {
        unionArr[i] = arr1[i];
    }
    // Step 3: Copy elements of arr2
    for (int j = 0; j < m; j++) {
        unionArr[n + j] = arr2[j];
    }
    // Step 4: Sort the combined array
    sort(unionArr, unionArr + n + m);

    // Step 5: Print only unique elements
    cout << "Union of arrays: ";
    cout << unionArr[0] << " "; // First element is always printed

    for (int i = 1; i < n + m; i++) {
        if (unionArr[i] != unionArr[i - 1]) {
            cout << unionArr[i] << " ";
        }
    }
}
*/

//equilibrium or not 
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];  // Calculate the total sum of the array
    }
    int leftSum = 0;  // Initially, there is no sum on the left side.
    // Iterate through the array to check for equilibrium point.
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];  // Now totalSum represents the sum of elements on the right side of i.
        // If leftSum equals rightSum (totalSum after subtraction), we have found the equilibrium.
        if (leftSum == totalSum) {
            cout << "Equilibrium found at index " << i << endl;
            return 0;  // Exit the program as equilibrium is found.
        }
        leftSum += arr[i];  // Update leftSum for the next iteration.
    }
    cout << "No equilibrium found" << endl;  // If no equilibrium is found after the loop.
    return 0;
}