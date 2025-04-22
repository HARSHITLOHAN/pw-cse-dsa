#include<iostream>
using namespace std;
int main(){
    /*int arr[3][4];    //this telling size of array 3 row 4 column
 */   
   //two ways to initialize
    int arr[2][3]={1,2,3,4,5,6};   //in putting array r,c value based on r,c but when we acess it
    //we subtract c by 1 and r by 1 because we start counting from 0 not from 1.
    cout<<arr[1][1]<<endl;   //accesing particular element 
}
/*
    int ar[3][4]={{1,2,3,6},{4,5,6,1},{7,8,9,4}};
    cout<<ar[2][3];
}*/

/*  //taking input of a 2d array.
    int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}*/