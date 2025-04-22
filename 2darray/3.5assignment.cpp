#include<iostream>
using namespace std;
int main(){
/*.Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
Input : 
1  1  1
1  0  1
1  1  1
Output : 
1  0  1
0  0  0
1  0  1
*/
int arr[3][3]={{1,1,1},{1,0,1},{1,1,1}};
bool row[3]={0};
bool col[3]={0};
for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
        if(arr[i][j]==0){
        row[i]=true;
        col[j]=true;
        }
    }
}
for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
        if(row[i] || col[j]){
            arr[i][j]=0;
        }
    }
}
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

return 0;
}