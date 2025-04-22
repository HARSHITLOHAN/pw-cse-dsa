#include<iostream>
#include<climits>
using namespace std;
int main(){
/*
//1.Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns. 
//write a program to add two matrices and save the result in one of the given matrices.
    int arr[5][5]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5};
    int secarr[5][5]={9,8,7,6,5,4,3,2,1,0,9,8,7,6,5,4,3,2,1,0,9,8,7,6,5};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]+=secarr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
/*
//2. Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the 
rectangle from (l1,r1) to (l2, r2).

Input 1:
            1  2 -3 4
            0  0 -4 2
 1 -1  2 3
-4 -5 -7 0
l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
Output 1: 2

int arr[4][4]={{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-5,-7,0}};
int sum=0;
for(int i=0;i<=1;i++){
    for(int j=0;j<4;j++){
        sum+=arr[i][j];
    }
}
cout<<sum;
}*/

/*
//3. Write a C++ program to find the 2nd largest element of a given 2D array of integers.
 Input 1:
 1 3 4 6
 2 4 5 7
 3 5 6 8
 4 6 7 9

int arr[4][4]={{1,2,3,4},{3,4,5,6},{4,5,6,7},{6,7,8,9}};
int max=INT_MIN;
int secmax;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]>max){
        secmax=max;
        max=arr[i][j];
        }
        else if(arr[i][j]<max && arr[i][j]>secmax){
            secmax=arr[i][j];
        }
    }
}
cout<<secmax;
}*/

/*
//4. Write a program to print the row number having the maximum sum in a given matrix.

int arr[3][3]={{1,2,3},{3,4,5},{4,5,6}};
int sum=0,max_sum=INT_MIN,rowindex=-1;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    sum+=arr[i][j];
}
    if(sum>max_sum){
        max_sum=sum;
        rowindex=i;
    }
 }
 cout<<"row no "<<rowindex;
 cout<<"max_sum"<<max_sum;
}
*/

/*
Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the 
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
Input 1:
1 2 3 4 5
3 4 5 6 7
7 6 5 4 3
8 7 6 5 4
1 2 37 8 0
Output 1:
    3
    5
7 6 5 4 3
    6
   37

int arr[5][5]={1,2,3,4,5,3,4,5,6,7,7,6,5,4,3,8,7,6,5,4,1,2,37,8,0};
for(int i=0;i<=1;i++){
    for(int j=2;j<3;j++){
        cout<<arr[i][j]<<endl;
    }
}
for(int i=2;i<3;i++){
    for(int j=0;j<5;j++){
        cout<<arr[i][j];
    }
}
cout<<endl;
for(int i=3;i<5;i++){
    for(int j=2;j<3;j++){
        cout<<arr[i][j]<<endl;
    }
}

}*/
/*
//or this i think first
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {7, 6, 5, 4, 3},
        {8, 7, 6, 5, 4},
        {1, 2, 37, 8, 0}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 2; j < 3; j++) { // Printing middle column
            cout << arr[i][j] << endl;

            if (i == 5 / 2) { // Middle row condition
                for (int j = 0; j < 5; j++) { // Print the entire middle row
                    cout << arr[i][j] << " ";
                }
                cout << endl; // New line after printing row
            }
        }
    }

    return 0;
}*/
/*
//or giving by chatgpt

    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {7, 6, 5, 4, 3},
        {8, 7, 6, 5, 4},
        {1, 2, 37, 8, 0}
    };

    // Print middle column
    for (int i = 0; i < 5; i++) {
        cout << arr[i][2] << endl;  
    }

    // Print middle row
    for (int j = 0; j < 5; j++) {
        cout << arr[2][j] << " ";
    }

    return 0;
}*/

