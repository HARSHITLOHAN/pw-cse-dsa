#include<iostream>
using namespace std;
int main(){
//formula --> C(i,j+1)=C(i,j)× i−j/j+1;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int cur=1;
        for(int j=0;j<=i;j++){
        cout<<cur<<" ";           //everytime in each row print 1 when j=0;
        cur=cur*(i-j)/(j+1);      //then this condition work when j=0 only then j=1 etc.
        }
        cout<<endl;
    }
}
/* 
pascal triangle
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
*/