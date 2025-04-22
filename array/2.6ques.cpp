#include<iostream>
#include<vector>
using namespace std;
/*
//5.revrse a particular part of array using function.         *************imp************
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
void reverse(int i,int j,vector<int>&v){
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;
    int i,j;
    cout<<"the value of i is ";
    cin>>i;
    cout<<"the value of j is ";
    cin>>j;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    reverse(i,j,v);
    display(v);
}*/

//or             (doing using single function)
/*
void display(vector<int>&v){
    int *ptr=&v[0],*ptr2=&v[3];
    while(ptr<ptr2){
        swap(*ptr,*ptr2);
        ptr++;
        ptr2--;
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);
    //reverse(i,j,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}*/

/*
//or
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
void reverse(int i,int j,vector<int>&v){
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;
    int k;
    cout<<"enter last till where we have to reverse ";
    cin>>k;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    reverse(0,v.size()-k,v);
    display(v);
}
*/

/* 
//6.Rotate the given array ‘a’ by k steps, where k is non-negative. 
Note : k can be greater than n as well where n is the size of array ‘a’. 
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void reverse(int i,int j,vector<int>&v){
    while(i<j){
    swap(v[i],v[j]);
    i++;
    j--;
    }
    return;
}
int main(){
vector<int>v;
int k=2;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
int n=v.size();
if(k>n){
    k%n;       //if k greater then n then modulo and the modulo ans time it will run.
}
reverse(0,v.size()-k-1,v);                   //phla 0 se size-k takk reverse
reverse(v.size()-k,v.size()-1,v);            //then jo v.size-k tha uska agha v.size-1 tk
reverse(0,v.size()-1,v);            //phir pura element jo mila reverse krke unn sabko reverse krdo.
display(v);
}*/

/*Modify original vector	vector<int>& v	void ✅
Work on copy and return new vector	vector<int> v	vector<int> ✅
Just calculate something	const vector<int>&	int, bool, etc. ✅
*/