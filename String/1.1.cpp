#include<iostream>
using namespace std;
int main(){
   /*char str[]={'a','b','c','d','e'};*/
    //for(int i=0;i<5;i++){
    //    cout<<str[i];
    //}

//if we dont no size of array
    /*for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }*/

//we can also print it normaly like thie print all value which is string
    //cout<<str;

//it tells at which index convert char into int.
    //cout<<(int)(str[5]);


//if in array we put \0 between a array it ends it there only 
//it works till time it doesnt get \0 as it get it stop
    char str[]={'a','b','\0','c','d','e'};
    cout<<str;

}