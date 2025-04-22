#include<iostream>
#include<string>
using namespace std;
int main(){
    //string str="harshit";
    //cout<<str<<endl;
    //cout<<str[1]<<endl;
     
    //string s;
//here problem we can not put character with space it treat it as seprate variable character.
    //cin>>s;     
    
//to overcome this problem we use
    //getline(cin,s);
    //cout<<s;
    

/*1.input a string of length n and count all the vowels in the given string.
   char str[]="harshit lohani";
   int count=0;
   for(int i=0;i<str[i]!='\0';i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    count++;
    }
   }
   cout<<count;*/

//or input a string

/* string str;
   cin>>str;
   int count=0;
    for(int i=0;i<str.length();i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    count++;
    }
   }
   cout<<count;
*/ 


/*2. updation of single char in string
   //in c++ string are mutable;
   string str="harshit lohani";
   str[1]='r';
   str[11]='r';
   cout<<str;*/

   
/*3.input a string of size n and update all the even position in the string to
charcter 'a'.consider 0 based indexing
   string str;
   cin>>str;
   for(int i=0;i<str.size();i++){
    if(i%2==0){
        str[i]='a';
    }
}
cout<<str;*/

}


//str[i]!='\0'  this we use in char string[]; 
//in real string we dont use this we use str.length(),str.size() to get the string size.