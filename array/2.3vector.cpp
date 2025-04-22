#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    /*vector<int>v;        
//1.
    v.push_back(1);     //1  1                   first digit for size 2nd for capacity
    v.push_back(17);    //2  2
    v.push_back(123);   //3  4
    v.push_back(11);    //4  4
    v.push_back(12);    //5  8
    v.push_back(17);    //6  8
    v.push_back(2);     //7  8
    v.push_back(3);     //8  8
    v.push_back(4);     //9  16
    v.push_back(5);     //10 16
    v.push_back(7);     //11 16
    cout<<"size of "<<v.size()<<endl;
    cout<<"capacity is "<<v.capacity()<<endl;
    v.pop_back();       //10 16
    v.pop_back();       //9  16
    v.pop_back();      
    v.pop_back();      
    v.pop_back();      
    v.pop_back();     
    cout<<"size of "<<v.size()<<" " <<endl;
    cout<<"capacity is "<<v.capacity()<<" "; 
    //once capacity size taken does not remove it until program end;*/
    
//2.
    /*vector<int>v(5);    //initialized size of array is 5 and decard also (size and capacity) both is 5
    for(int i=0;i<5;i++){
    cin>>v[i];
    }
    for(int i=0;i<5;i++){
    cout<<v[i];
    }
    
//2.1  when size is not assigned not value is provided taking input from loop
    vector<int>v;     //size of vector not given
    for(int i=0;i<5;i++){
        int x;          //creating a box x
        cin>>x;         //putting value of x
        v.push_back(x);  //this is storing element 1 by 1 as loop is going
    }
    for(int i=0;i<5;i++){
    cout<<v[i];
    }*/
    
/*
//3.declared and also intialised and also assign each value 5.
    vector<int>v(4,5);    //size of v is 4 and value of each is 5
    cout<<v[3];*/
    
/*
//4.we are using at instead of v[i] to update or print.
    vector<int>v;
    v.push_back(17);    
    v.push_back(123);  
    v.push_back(11);    
    v.push_back(12);    
    v.push_back(17);    
    cout<<v.at(2)<<endl;      //it will print 2nd index value 11.
    v.at(2)=90;          //updating value at index 2.
    for(int i=0;i<v.size();i++){
    //cout<<v[i]<<" ";      //print all value and update value print at index 2 90.
    cout<<v.at(i)<<" ";
}*/ 
   
//5.sort element of vector 
   vector<int>v;
   v.push_back(1);
   v.push_back(8);
   v.push_back(6);
   v.push_back(10);
   v.push_back(3);
   v.push_back(2);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
   cout<<endl;
   
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   
}