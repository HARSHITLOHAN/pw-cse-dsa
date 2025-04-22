#include<iostream>
#include<vector>
using namespace std;
/*
//1.pass by refrence created function value can be print in main function to.
void pasref(vector<int>&a){   //passed adress of value
    a[0]=100;
    //a.at(0)=100;
}
int main(){
 vector<int>v;
 v.push_back(1);
 v.push_back(6);
 v.push_back(4);
 v.push_back(8);
 v.push_back(6);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
pasref(v);                     //passed value
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}*/

/*
//2.pass by value only  (print inside function)
void pasval(vector<int>a){
   a[2]=250;
   for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
   }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    pasval(v);

}
*/