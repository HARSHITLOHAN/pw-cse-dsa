#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
/*
//1.find the last occurence of x element.
    int x=3;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    int indx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){      
            indx=i;    //putting value of indx where found x.
            break;
        }
    }
    cout<<indx; 
    */

/*
//2.find the doublet in the array whose sum is eq to the given value of x.
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    int x=7,sum=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            sum=v[i]+v[j];   //value added
            if(sum==x){
                cout<<"it will print index ("<<i<<" "<<j<<)<<endl;
                cout<<"it is print value which will give us x "<<v[i]<<" "<<v[j]<<endl;
            }
        }
    }*/

/*
//3.write a program to cpy the content of one array into another in reverse order.
    vector<int>v2(v.size());
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //new vector v2 storing element in reverse order of vector v.
    for(int i=v.size()-1;i>=0;i--){
        v2.push_back(v[i]);
    }   
    //print reverse array
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
*/

/*
//4.write a progrm to revrse the array without using extra array.(using 2 pinter)
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

int *ptr=&v[0];
int *ptr2=&v[4];

while(ptr<ptr2){
    swap(*ptr,*ptr2);
    ptr++;
    ptr2--;
}
for(int i=0;i<=4;i++){
    cout<<v[i];
}
*/

/*
//5.reverse particular part of array from index (1 to 3).
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
int *ptr=&v[1];
int *ptr2=&v[3];
while(ptr<ptr2){    
    swap(*ptr,*ptr2);
    ptr++;
    ptr2--;
}
for(int i=0;i<=4;i++){
cout<<v[i];
}   */
}