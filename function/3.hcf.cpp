#include<iostream>
using namespace std;
int hcf(int a,int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
   int a,b;
    cout<<"the value of a is ";
    cin>>a;
    cout<<"the value of b is ";
    cin>>b;
    cout<<hcf(a,b);
    
}