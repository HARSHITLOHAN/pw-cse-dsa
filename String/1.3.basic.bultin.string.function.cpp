#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  //string str="harshit";

/* this is used to count size of string -->   <string_name>.size();
  cout<<str.size();        //print 12
  cout<<str.length(); */

   
/* this push value from back and take out value from back -->   <string_name>.push_back()  ,   <string_name>.pop_back();
  str.push_back(' ');
  str.push_back('d');
  str.push_back('o');
  str.push_back('n');
  str.push_back('defh');   //can not push back string only 1 char can push back
  cout<<str<<endl;

  str.pop_back();
  cout<<str;*/
    

/* '+' its work is to add front or back a char or string can not a no.abs
  string st="ram";
  string str=" bhai ji";
  cout<<st+str;                      //print like --> ram bhai ji
  cout<<st+"hey buddy"<<endl;        //print like --> ramhey buddy
  cout<<str+'h'<<endl;               //print like --> ramh
*/


/* used for reversing a string particular part of string  -->  reverse(<string_name>.begin,<string_name>.end());
  //reverse(str.begin()+2,str.end()-1);
  reverse(str.begin()+1,str.begin()+4);
  cout<<str;
*/

   
/*1.input a even string length and reverse the first half of string.
   string str="harshi";
   int n=str.size();
   reverse(str.begin(),str.begin()+n/2);
   cout<<str;*/

/*2.input a string of length greater than 5 and reverse te substring from position 2 to 5
using inbuilt functions.
  string str;
  cin>>str;
  reverse(str.begin()+1,str.begin()+5);
  cout<<str;
}*/


/*
//substr()
  string s="harshitlohan";
  int len=s.size();
  cout<<s.substr(2)<<endl;
  //s.substr(idx,len)
  cout<<s.substr(2,4)<<endl; //2 se leka 4 tkk substring  
  cout<<s.substr(len/2);*/


/*  //convert intiger to string 
//to_string()
int a=12345;
string s=to_string(a);
cout<<s;
*/


/*
//3.return the total no of digits in a num without using loop.
    int n=12345;
    string s=to_string(n);
    cout<<s.size();
*/

}