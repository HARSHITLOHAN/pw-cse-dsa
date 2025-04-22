#include<iostream>
using namespace std;
int main()/*
//1.Count the number of triplets whose sum is equal to the given value x.
{
int arr[7]={1,2,3,1,5,7,2};
int x=7,n=7;
int count=0;
for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
    for(int k=j+1;k<n;k++){
    if(arr[i]+arr[j]+arr[k]==x){
        count++;
    }
    }
   }
}
cout<<count;
}*/

/*
//2.Find the factorial of a large number.
//phla max value niklenga array ki then find factroria of that value
{
    int fact=1;
    for(int i=1;i<7;i++){       //th value we have to find that will be the for loop 
        fact*=i;
    }
    cout<<fact;
}*/

//3.Find the first non-repeating(unique) element in the array .

//4.Check if an array is a subset of another .
{
    int arr1[] = {1, 2, 3, 4};  
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};  
    int n1 = sizeof(arr1) / sizeof(arr1[0]);  
    int n2 = sizeof(arr2) / sizeof(arr2[0]);  
    bool isSubset = true;  

    for (int i = 0; i < n1; i++) {  
        for (int j = 0; j < n2; j++) {  
            if (arr1[i] != arr2[j]) {  
                isSubset = false;  
                break;  
            }
            else{
                isSubset = true;
                break;
            }
        }
    }
    if (isSubset==false)  
        cout << "arr1 is a subset of arr2" << endl;
    else  
        cout << "arr1 is NOT a subset of arr2" << endl;
    return 0;
}
