#include<iostream>
using namespace std;
int main(){
/*

//1.write a pgm to store roll no and marks obtained by 4 student side by side in a matrix.
    int rolmark[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>rolmark[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<rolmark[i][j]<<" ";
        }
        cout<<endl;
    }
}*/

/*
//2.write a c++ pgm to find the largest element of a given 2d array of integers.
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int max=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
 cout<<max;
}*/

/*
//3.write a prgm to print sum of all 2d element;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<=3-1;i++){
        for(int j=0;j<=3-1;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<sum;
}*/

/*
//4.write a prgm to print sum of two 2d element;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arrtwo[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int result[3][3];
    for(int i=0;i<=3-1;i++){
        for(int j=0;j<=3-1;j++){
        result[i][j]=arr[i][j]+arrtwo[i][j];
    }
}

for(int i=0;i<=3-1;i++){
    for(int j=0;j<=3-1;j++){
    cout<<result[i][j]<<" ";
}
cout<<endl;
}
}*/

/*
//5.  print transpose of matrix. it is also called colom wise printing
int n,m;                                  //everything happening in single 2darray
cout<<"enter the size of row ";
cin>>n;
cout<<"enter the size of column ";
cin>>m;
int arr[n][m];
for(int i=0;i<=n-1;i++){
    for(int j=0;j<=m-1;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<=n-1;i++){
    for(int j=0;j<=m-1;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}*/

/*
//5.1 or here we created one empty traspose matrix put transpose in it
int arr[3][2]={1,2,3,4,5,6};
int transpose[2][3]={0};
for (int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
   //traspose     only difference in normal matrix n=row m=col will become m=cols,n=row
for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        transpose[i][j]=arr[j][i];
    }

cout<<endl;
cout<<"transpose of a matrix "<<endl;
for (int i=0;i<2;i++){
    for(int j=0;j<3;j++){
    cout<<transpose[i][j]<<" ";
    }
cout<<endl;
}
}*/

/* 
//6. leet code 867   same as uper question but only function to right 

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(); //rows
        int n=matrix[0].size(); //column
        vector<vector<int>>t(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t[i][j]=matrix[j][i];
            }
        }
        return t;
    }
};*/

/* 

//7.leet code imp 867 not present 
//you are given matrix 2d array of size n*n change matrix into its transpose.

int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
cout<<"swapped element are "<<endl;
for (int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
        int temp=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=temp;
    }
}
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
}
*/

//8.rotate array by 90*      48 medium leetcode question 
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
 //transpose  a array
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;    
    }
  }
  //reverse array
  for(int k=0;k<3;k++){   //it represent row index row 1st element is i last j
    int i=0;
    int j=3-1;
    while(i<=j){
        int temp=arr[k][i];
        arr[k][i]=arr[k][j];
        arr[k][j]=temp;
        i++;
        j--;
    }
}
cout << "Rotated Matrix:\n";
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

return 0;
}


