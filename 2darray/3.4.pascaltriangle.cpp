#include<iostream>
#include<vector>
using namespace std;
int main(){
/*
//1.given an integer numrow generate a pascal triangle.
 int m=5;
 vector<vector<int>>v;
 for(int i=1;i<=m;i++){
    vector<int>a(i);
    v.push_back(a);
 }
 for(int i=0;i<m;i++){
    for(int j=0;j<=i;j++){
        if(j==0 || j==i)
        v[i][j]=1;
        else
        v[i][j]=v[i-1][j]+v[i-1][j-1];
    }
 }
 //print
 for(int i=0;i<m;i++){
    for(int j=0;j<=i;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
 }
 */

/*
 //2.grid binary to decimal maximise row value and over all sum of binary matrix; leetcode 861
 class Solution {
    public:
        int matrixScore(vector<vector<int>>& grid) {
            int rows=grid.size();
            int cols=grid[0].size();
            //making first colom ones
            for(int i=0;i<rows;i++){
                if(grid[i][0]==0){
                    for(int j=0;j<cols;j++){
                        if(grid[i][j]==0) grid[i][j] = 1; //grid = 1
                        else grid[i][j]=0;
                    }
                }
            }
            //making colom max 0 to 1
            for(int j=0;j<cols;j++){
                int noz=0,noo=0;
                for(int i=0;i<rows;i++){
                    if(grid[i][j]==0) noz++;
                    else noo++;
                }
                if(noz>noo){
                    for(int i=0;i<rows;i++){
                         if(grid[i][j]==0) grid[i][j] = 1; //grid = 1
                        else grid[i][j]=0;
                    }
                }
            }
            int sum=0;
            for(int i=0;i<rows;i++){
                int x=1;
                for(int j=cols-1;j>=0;j--){
                    sum+=grid[i][j]*x;
                    x*=2;
                }
            }
            return sum;
        }
    };

}
*/

/*
//3.find a number in a matrix most efficient way where all no in row
is in ascending order and also in colms ascending order.
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int rows=matrix.size();
            int cols=matrix[0].size();
            int i=0,j=cols-1;
            while(i<rows && j>=0){
                if(matrix[i][j]==target) return true;
                else if(matrix[i][j]>target) j--;
                else i++;
            }
            return false;
        }
    };*/