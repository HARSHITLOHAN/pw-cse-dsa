#include<iostream>
#include<vector>
using namespace std;
int main()
/*
//1. print no of 0s and 1's in sorted way.
{     
   int arr[]={1,0,1,0,1,0,1,0,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   int zero=0;
   int one=0;
   for(int i=0;i<n;i++){
       if(arr[i]==0){
           zero++;
       }
       else{
           one++;
       }
   }
   for(int i=0;i<n;i++){
       if(i<zero){        //0123   zero is here 4
           arr[i]=0;
       }
       else{
           arr[i]=1;
       }
   }
   for (int i=0;i<n;i++) {
       cout<<arr[i]<<" ";
   }
}*/

/*
//1.2 sort 0's and 1's using two pointer.
{
int arr[]={1,1,0,0,1,1,0,1};
int n=sizeof(arr)/sizeof(arr[0]);
int *ptr=&arr[0];
int *ptr1=&arr[n-1];
while(ptr<ptr1){
    if(*ptr==0){
    ptr++;
    }
    if(*ptr==1){
    ptr1--;
    }
    else if(*ptr==1 && *ptr1==0){
        swap(*ptr,*ptr1);
    }
    ptr++;
    ptr1--;
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}*/

/*
//2.Move all -ve no to begning and +ve to end with constant extra space/
{
vector<int>v;
v.push_back(1);
v.push_back(-1);   
v.push_back(9);   
v.push_back(-2);   
v.push_back(8);   
v.push_back(-3);   
v.push_back(3);   
int n=v.size();
int a=0;
int last=n-1;
while(a<last){
   if(v[a]<0){
    a++;
   }
   else if(v[last]>0){
    last--;
   }
   else{
    swap(v[a],v[last]);
    a++;
    last--;
   }
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}  
}*/

/*
//3.sort 0's,1's,2's in array. 
//it is solved with 2 pass algo. 2 time loop used.
{
    int arr[]={0,1,2,1,2,0,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
        if(arr[i]==2){
            two++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<zero){         //here it is checking index if i less then zero value here zero variable
        //contain how many time 0 present so it will bigger then i that why we are putting it.
            arr[i]=0;
        }
        else if(i<zero+one){ //kha se kha ttk value bhrni h 0 se 1 tak taken 0+1
            arr[i]=1;
        }
        else{
           arr[i]=2; 
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
*/

/*
//3.1 one pass algo
{
int arr[]={1,2,1,2,0,0,2,0};
int n=sizeof(arr)/sizeof(arr[0]);
int low=0,mid=0,high=n-1;
while(mid<=high){
    if(arr[mid]==2){
        swap(arr[mid],arr[high]);
        high--;
    }
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        low++;
        mid++;
    }
    else{
        mid++;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}*/

/*
//4.merge two sorted array.
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 9};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[m + n];
    int i=0,j=0,k=0;
    while(i<n && j<n){
        if(arr1[i]<arr2[j]){        //checking size of each array element
            arr3[k]=arr1[i];        //here arr[i] smaller we are putting it 
            k++;                   //and index no is move foreward to put next value
            i++;    //same i value is now bigger so j will put value
 }
 else if(arr1[i]>arr2[j]){        if arr[i] size bigger put j in arr[k]
    arr3[k]=arr2[j];             
    k++;                       index++;
    j++; 
 }
 else if(i==n){               //as i array is smaller when it is equal to n
    while(j<=n){              //j value we will check is smaller then n if yes
        arr3[k]=arr2[j];      //put j value;
        k++;                  //index increasing to put next value 
        j++;             //index increase to put next value of arr[j] in  k
    }
 }
for (int x = 0; x < m + n; x++) {
    cout << arr3[x] << " ";
}
}
*/

/*
//5.find the next permutation of array 
//note:-if not possible then print the sorted order in ascending order*/
{
    vector<int> nums = {1, 2, 3}; // Example input
    int n = nums.size();
    int i, j;
    // Step 1: Find the first decreasing element from the right
    for (i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) break;
    }
    if (i >= 0) {
        // Step 2: Find the next greater element to swap with
        for (j = n - 1; j > i; j--) {
            if (nums[j] > nums[i]) break;
        }
        swap(nums[i], nums[j]);
    }
    // Step 3: Reverse the remaining right part
    for (int l = i + 1, r = n - 1; l < r; l++, r--) {
        swap(nums[l], nums[r]);
    }
    // Print the result
    for (int num : nums) 
        cout << num << " ";
    cout << endl;
}

/*in 1,2,3 question 2 logic are applying 1 
using for loop and counting value present in that array 0,1,2
then again using new loop puting value if number greater then i print first 
or telling print arr[i]=first then arr[i]=first+sec 

2nd logic using reverse logic in this not reversing printing 1st 0 ,1,2 telling */