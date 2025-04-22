#include<iostream>
using namespace std;
int main(){
/*
//1.write a progrm to print multiple of two matrix.
const int m=2,n=3;
int arr[m][n]={{1,2,3},{5,6,7}};

const int p=3,q=4;
int arrsec[p][q]={{1,2,3,4},{4,5,6,7},{7,8,9,10}};

int result[m][q]={0};
if(n==p){
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
            result[i][j]+=arr[i][k]*arrsec[k][j]; //basicaly value k changing
        }
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
}
else{
    cout<<"can not multiple matrics is not equal ";
}
return 0;
}*/

/*
//2.write the program to print matrix in wave form     1 2 3 4  8 7 6 5  9 10 11 12  16 15 14 13
int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
for(int i=0;i<4;i++){
    if(i%2==0){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
        }
    }else{
        for(int j=4;j>0;j--){
            cout<<arr[i][j]<<" ";
        }
    }
    }
}*/

/*
//3.print in wave form 7 8 9  6 5 4  1 2 3
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=2;i>=0;i--){
    if(i%2==0){
    for(int j=0;j<=2;j++){
      cout<<arr[i][j]<<" ";
    }
}
else{
    for(int j=2;j>=0;j--){
        cout<<arr[i][j]<<" ";
    }
}
}
}*/

/*
//4. 1 4 7  8 5 2  3 6 9
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int j=0;j<=2;j++){
    if(j%2==0){
    for(int i=0;i<=2;i++){
        cout<<arr[i][j]<<" ";
    }
} else{
        for(int i=2;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
}
}
}*/

// spiral matrix print              leetcode 54.
    int arr[4][5] = {
        {1, 2, 3, 4, 5}, 
        {6, 7, 8, 9, 10}, 
        {11, 12, 13, 14, 15}, 
        {16, 17, 18, 19, 20}
    };
    int minr = 0, maxr = 3, minc = 0, maxc = 4;  // Fixed bounds
    while (minr <= maxr && minc <= maxc) {
        // Right 
        for (int j = minc; j <= maxc; j++) {  
            cout << arr[minr][j] << " ";
        }
        minr++;  
        // Down 
        for (int i = minr; i <= maxr; i++) {  
            cout << arr[i][maxc] << " ";
        }
        maxc--;
        // Left traversal (only if minr <= maxr)
        if (minr <= maxr) {  
        for (int j = maxc; j >= minc; j--) {  
            cout << arr[maxr][j] << " ";
        }
        maxr--;  // Move row boundary up
}
// Up traversal (only if minc <= maxc)
        if (minc <= maxc) {  
        for (int i = maxr; i >= minr; i--) {  
            cout << arr[i][minc] << " ";
        }
        minc++;  // Move column boundary right
}
    return 0;
}
