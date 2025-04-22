#include<iostream>
using namespace std;
int main(){
/*1.Write a program to print the elements of both the diagonals in a square matrix.
Input 1:
1  2  3 
4  5  6
7  8  9
Output 1: 
1  3
  5
7  9


int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;  // Size of square matrix

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {  
                cout << arr[i][j] << " ";  // Print diagonal element
            } else {
                cout << "  ";  // Print spaces for better format
            }
        }
        cout << endl;  
    }
}*/

/*2.Write a program to rotate the matrix by 90 degrees anti-clockwise.
Input 1:
1 2 3
4 5 6
7 8 9
Output 1:
3 6 9
2 5 8
1 4 7

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0; i<3; i++){
  for(int j=i+1; j<3; j++){
      swap(arr[i][j], arr[j][i]);  
  }
}
cout<<endl;
for(int k = 0; k < 3; k++) {
  int top = 0, down = 2;
  while(top < down) {
      swap(arr[top][k], arr[down][k]);  
      top++;
      down--;
  }
}
for(int i = 0; i < 3; i++) {
  for(int j = 0; j < 3; j++) {
      cout << arr[i][j] << " ";
  }
  cout << endl;
}
}*/

/*3.Write a program to print the matrix in wave form.
Input :
1 2 3
4 5 6
7 8 9
Output : 7 4 1 2 5 8 9 6 3

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int j=0;j<3;j++){
  if(j%2==0){
  for(int i=2;i>=0;i--){
    cout<<arr[i][j]<<" ";
  }
}
else{
  for( int i=0;i<3;i++){
  cout<<arr[i][j]<<" ";
  }
}
}
}*/

/*4.Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
Input 1: n = 3
Output 1: [[1,2,3],[8,9,4],[7,6,5]]
Input 2: n = 1
Output 2: [[1]]
1 2 3
8 9 4 
7 6 5*/
int n;
cout<<"the value of n is ";
cin>>n;
int num=1;
int arr[n][n];
int minr=0,maxr=n-1,minc=0,maxc=n-1;
while(minr<=maxr && minc<=maxc){
  for(int j=minc;j<=maxc;j++){
    arr[minr][j]=num++;
  }
  minr++;

  for(int i=minr;i<=maxr;i++){
    arr[i][maxc]=num++;
  }
  maxc--;
  if(maxr>=minr){
  for(int j=maxc;j>=minc;j--){
    arr[maxr][j]=num++;
  }
  maxr--;
}
 if(minc<=maxc){
  for(int i=maxr;i>=minr;i--){
    arr[i][minc]=num++;
  }
  minc++;
 }
}
for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
  }
  cout << endl;
}
}

/*5.  Predict the output : 
int main(){
 int a[][2] = {{1,2},{3,4}};
 int i, j;
for (i = 0; i < 2; i++)
for (j = 0; j < 2; j++)
     cout << a[i][j];
return 0;
}*/