#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*
    vector<int>v;  //here v is name of vector
    v.push_back(1);   //it putting value from back.
    v.push_back(2);   //each time vector is doubled.
    v.push_back(3);
    cout<<v.size()<<endl;   //it will  print size of vector 
    cout<<v.capacity()<<endl; //it will print size of v everytime it doubles
    v[1]=23;       //by doing this value is changed but can not be assigned
    //like in array if we will not use push back we use v[0] like this
    //it will give garbage value at last as it assign value from last but 
    //last tho push_back value stored so give garbage value.
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    */
    
   vector<int>v;
   v.push_back(1);
   v.push_back(9);
   v.push_back(5);
   v.push_back(18);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
   }
   v.pop_back();      //this work is to remove element from back; it removed 18
   v.pop_back();      //it removed 5
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}